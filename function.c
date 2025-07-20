#include<stdio.h>

//program always starts execution from the main function. So function call should be in the main function


//declaration/prototype
void printHello();

int main() {
	//function call
	printHello();
	
	return 0;
}

//function definition
void printHello(){
	printf("Hello!\n");
}


//-------------------------------------------------------------------------


void printHello();

int main() {
	printHello();
	printHello();
	printHello();
	
	return 0;
}

void printHello(){
	printf("Hello!\n");
}


//---------------------------------------------------------------------------


void printHello();
void printBye();

int main(){
	printHello();
	printBye();
	return 0;
}

void printHello(){
	printf("Hello\n");
	
} 

void printBye(){
	printf("Bye\n");

}


//-------------------------------------------------------------------------------


void printSalam();
void printBonjour();

int main(){
	char nation;
	printf("Hi! Are you Bangladeshi or French (B/F): ");
	scanf("%c", &nation);
	
	if(nation == 'B') { //single quotaion must (not double)--character should be in single quotation.
		printSalam();
	} 
	else if(nation == 'F') {
		printBonjour();
	}
	
	return 0;
}

void printSalam(){
	printf("Assalamualaikum\n");
}

void printBonjour(){
	printf("Bonjour\n");
}


//-------------------------------------------------------------------------------------


//Have calculation. Need a return value. So int should be used.
//Need parameters
int sum(int a, int b);

int main(){
	int a, b;
	
	printf("Enter first number: ");
	scanf("%d", &a);
	
	printf("Enter second number: ");
	scanf("%d", &b);
	
	
	int s = sum(a, b); //Here input variables should be placed
			   // argument/actual parameter
	
	printf("sum is: %d\n", s);
	
	return 0;
}

int sum(int x, int y){  //parameter/formal parameter
	return x + y;
}


//----------------------------------------------------------------------------------------

//No calculation. No return value. So 'void' should be used. 
//Need parameters
void printTable(int num);

int main(){
	int num;	
	
	printf("Enter number: ");
	scanf("%d", &num);
	
	printTable(num);
	
	return 0;
}

void printTable(int number){
	for(int i=1; i<=10; i++) {
		printf("%d\n", i*number);
	}

}


//---------------------------------------------------------------------------------------------


//Though have calculation but no need to return
//maybe we are working with one variable 
void calculatePrice(float value);

int main(){
	float value;
	
	printf("Enter value: ");
	scanf("%f", &value);
	
	calculatePrice(value);

	return 0;
}

void calculatePrice(float value){
	float totalPrice;	
	
	totalPrice = value + (value * 0.18); // with 18% VAT
	printf("%f\n", totalPrice);
}


//----------------------------------------------------------------------------------------------

//call by value

void calculatePrice(float value);

int main(){
	float value; //let value is 100
	
	printf("Enter value: ");
	scanf("%f", &value);
	
	calculatePrice(value);
	printf("Value is: %f\n", value); // will print 100 (not 118)

	return 0;
}

void calculatePrice(float value){ // in this parameter the copy of input(100) will be sent. Not actual value.
	float totalPrice;	
	
	totalPrice = value + (value * 0.18); // will print 118
	printf("%f\n", totalPrice);
}


//------------------------------------------------------------------------------------------------

// Call by reference

void calculatePrice(float *value);

int main(){
	float value; //let value is 100
	
	printf("Enter value: ");
	scanf("%f", &value);
	
	calculatePrice(&value); //passing the address (actual reference--not a copy)
	printf("Value is: %f\n", value); // will print 118

	return 0;
}

void calculatePrice(float *value){ // in this parameter the copy of input(100) will be sent. Not actual value.
	//float totalPrice;	
	//must modify the value directly. Should not use another variable (totalPrice)
	*value = *value + (*value * 0.18); // will print 118
	printf("%f\n", *value);
}


//-------------------------------------------------------------------------------------------------


float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float a, float b);

int main(){
	float side = 4.0;
	float radius = 2.0;
	float a = 5.0;
	float b = 6.0;
	
	float square = squareArea(side);
	printf ("Area of square: %f\n", square);
	
	float circle = circleArea(radius);
	printf ("Area of circle: %f\n", circle);
	
	float rectangle = rectangleArea(a, b);
	printf ("Area of rectangle: %f\n", rectangle);
	
	return 0;
}

float squareArea(float side){
	return side * side;
}

float circleArea(float radius){
	return 3.1416 * radius * radius;
}

float rectangleArea(float a, float b){
	return a * b;
}


