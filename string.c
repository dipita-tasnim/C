
#include<stdio.h>
#include<string.h> //this should be included

//string declaration
int main() {
//char str[6] = {'H', 'e', 'l', 'l', 'o', '\0'};  //arr size 1 more than len of str to add a null byte(\0)--to define the string is ended.

	//must in single quote
	char name[] = {'D', 'I', 'P', 'I', 'T', 'A', '\0'}; // '/0' must. indicates the ending.
	
	//OR
	
	//must in double quote
	char name[] = "DIPITA TASNIM"; // no need to use '\0' in this case. But if we want to take input something where we have some spaces like this then after the spaces the words will not be shown in the output. For this the solution we will see later.
	
	return 0;
}


//-----------------------------------------------------------------------------------------------

//print string
void printString(char arr[]);

int main() {
	char firstName[] = "Dipita";
	char lastName[] = "Tasnim";

	printString(firstName);
	printString(lastName);

	return 0;
}

void printString(char arr[]) {
	for (int i=0; arr[i] != 0; i++){
		printf("%c", arr[i]);
	}
	printf("\n");

}


//------------------------------------------------------------------------------------------

// OR--> simply by using %s format specifier. 

int main() {
	char name[] = "Dipita";
	printf("Your name is: %s\n", name);
		
	return 0;
}


//-------------------------------------------------------------------------------------------

//In this format we can take input also but '&' should not be used while taking input because string itself indicates a pointer.

int main() {
	char name[50];
	
	scanf("%s", name); //no need to use '&'
	
	printf("Your name is %s\n", name);
	
	return 0;
}


//-------------------------------------------------------------------------------------------


// take input of multi word strings with spaces

int main() {
	char str[100];
	
	fgets(str, 100, stdin); //will take input in the terminal
	puts(str); // will print the output 

	return 0;
}


//--------------------------------------------------------- ------------------------------


// copy string
int main() {

	char str1[] = "Hello";
	char str2[10];
	strcpy(str2, str1); //destination, source [destination string size >= souce]
	
	printf("%s\n", str2);
	
	return 0;
}


//----------------------------------------------------------------------------------------

// concate string

int main(){

	char str[] = "Hello";
	char str3[100] = "Dipita"; //str3 should have extra spaces for the allocation of str. 
	
	strcat(str3, str); // str3 = str3 + str
	
	printf("%s\n", str3); //just str3

	return 0;
}


//------------------------------------------------------------------------------------------

// Finding length (excluding '\0')

int main() {
	char str[] = "Oyshi";
	int len = strlen(str);
	printf("%d\n", len);
	
	return 0;
}


//----------------------------------------------------------------------------------

//compare two strings

int main() {
	char str1[] = "apple";
	char str2[] = "apple";
	char str3[] = "banana";
	
	int result1 = strcmp(str1, str2);
	int result2 = strcmp(str1, str3);
	
	//output: apple and apple are equal
	if (result1 == 0){
		printf("%s and %s are equal\n", str1, str2);
	}
	
	// will be checked by lexicographical order--> output: apple is less than banana
	if (result2 < 0){
		printf("%s is less than %s\n", str1, str3);
	}
	
	if (result2 > 0){
		printf("%s in greater than %s\n", str1, str3);
	}
	

	return 0;
}

//-------------------------------------------------------------------------------------

// Find pointer of first occurence of a character


int main() {
	char str[] = "Dipita";
	char *ptr; //for string each character will be the value of the pointer. So char sgould be used. Not int.
	
	ptr = strchr(str, 'i'); //ptr has the address of i
	printf("%p\n", ptr);  // address of i will be printed
	printf("%s\n", ptr);  //ipita will be
	
	// str points to the starting address of the string->(1F6450-1F6451)=index 1
	//string(character) address increases by 1 byte for each element. for Array(integer) it is 4 bytes 
	printf("%ld\n", ptr - str); //%ld for long integer

	return 0;
}


//--------------------------------------------------------------------------------------

// First occurence of the substring

int main() {
    char str[] = "Hello Dipita, welcome!";
    char *ptr;
    char *ptrD;

	//case1
    ptr = strstr(str, "Dipita");
    printf("%p\n", ptr); //address will be printed
    printf("%s\n", ptr); //Dipita, Welcome! will be printed
    	//case2
    ptrD = strchr(str, 'D');
    printf("%p\n", ptrD);
    printf("%s\n", ptrD); 
     

    return 0;
}

// Dipita address = D address. case1 and case2 gave the same output

//-------------------------------------------------------------------------------------------


//Take input from user using %c

int main() {

	char str[100];
	char ch;
	
	int i=0;
	while (ch != '\n') { //until user press the enter
		scanf("%c", &ch);
		str[i] = ch;
		i++;
	}
	//str[i] = '\0'; // code is also working if it is commented
	printf("%s", str);

	return 0;
}


//------------------------------------------------------------------------------------

// Find the salted form of a password entered by user if the salt is "123" and added at the end.

void salting(char password[]);

int main() {
	char password[100];

	printf("Enter your password: ");
	scanf("%s", password); //let, password is 'test'
	
	salting(password);

	return 0;
}

void salting(char password[]){
	char salt[] = "123";
	char newPassword[200];
	
	strcpy(newPassword, password); //newPassword = test
	strcat(newPassword, salt);  //newPassword = test123
	
	printf("%s\n", newPassword);
}


//-------------------------------------------------------------------------------------

// Write a function named slice, which takes a string & returns a sliced string from index n to m.

void slicing(char str[], int n, int m);

int main(){

	char str[] = "HelloWorld";
	
	slicing(str, 3, 6);

	return 0;
} 

void slicing(char str[], int n, int m){
	char newStr[100];
	int j = 0;
	for (int i=n; i<=m; i++){
		newStr[j] = str[i];
		j++;
	}
	printf("%s\n", newStr);

}


//---------------------------------------------------------------------------------------

// write a function which counts the vowel from the string

int countVowels(char str[]);

int main(){
	char str[] = "HelloWorld";
	countVowels(str);
	
	return 0;
}

int countVowels(char str[]){
	int count = 0;
	
	for (int i=0; str[i] != '\0'; i++){ // for ending condition str[i] must
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
			count ++;
		}
	}
	printf("%d\n", count);
}


//------------------------------------------------------------------------------------------------

// Check if a given character is present in a string or not

void checkChar(char str[], char ch);

int main(){
	char str[] = "Oyshi";
	char ch = 'y';
	
	checkChar(str, ch);
	
	return 0;
}

void checkChar(char str[], char ch){
	for (int i=0; str[i] != '\0'; i++){
		if (ch == str[i]){
			printf("Character is present\n");
			return; //important because -
				// not to check funrther
				//for this either 'character is present' or 'character not found will be printed' 
				// if we do not use return both print statement will be printed which is unexpected. Or we have to print either one which is also not so nice 			clarification.
		}
	}
	printf("Character not found\n");
}


