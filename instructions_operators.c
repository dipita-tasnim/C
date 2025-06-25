// //First we have to declare a variable. Then we will assign value.


#include<stdio.h>

int main(){
    int a = 10;
    int b = 20;
    int c;

    c = a + b;

    printf("%d", c);

    return 0;
}




#include<stdio.h>

int main(){
    int a; 
    int b;
    int c;

    // int a, b, c; //This is also valid

    a = b = 10;
    c = a * b;

    printf("%d", c);

    return 0;
}


//---------------------------------------------------------------------------------------------



// Modular operator %

#include<stdio.h>

int main(){
    int a = 3;
    int b = 2;

    printf("%d", a % b);  //result will be 1

    return 0;
}



#include<stdio.h>

int main(){
    int a = -3;
    int b = 2;

    printf("%d", a % b);  //result will be -1

    return 0;
}



#include<stdio.h>

int main(){
    int a = 3;
    int b = -2;

    printf("%d", a % b);   //result will be 1

    return 0;
}


//-----------------------------------------------------------------------------------------------------------



//Type conversion---[  int-int = int, int-float = float, float-int = float, float-float = float  ]

#include<stdio.h>

int main(){
    int a = 10;
    int b = 30;

    printf("%d", a + b);  //result will be int [40]. %d must be used.

    return 0;
}



#include<stdio.h>

int  main(){
    int a = 10;
    float b = 30.1;

    printf("%f", a + b); //result will be float [40.100000]. %f must be used.

    return 0;
}



#include<stdio.h>

int  main(){
    float a = 10.1;
    float b = 30.1;

    printf("%f", a + b); //result will be float [40.200001]. %f must be used.

    return 0;   
}



//----------------------------------------------------------------------------------------------------------------


//operator


//5*2 - 2*3 
#include<stdio.h>

int main (){
    int a = 5*2 - 2*3;
    printf("%d", a);  // result will be 4 --priority-->[/,*,% -->then--> +,-]
    return 0;
}


//5*2 / 2*3 

#include<stdio.h>

int main(){
    int a = 5*2 / 2*3;
    printf("%d", a);  // result will be 15
    return 0;
}



// //5* (2 / 2) *3 

#include<stdio.h>

int main(){
    int a = 5*(2 / 2)*3;
    printf("%d", a);  // result will be 15 --priority-->[bracket-->then--> /,*,% -->then--> +,-]
    return 0;
}



//5 + (2 / 2) *3 

#include<stdio.h>

int main(){
    int a = 5 + (2 / 2)*3;
    printf("%d", a);  // result will be 8 --priority-->[bracket-->then--> /,*,% (left to right priority of given equation)-->then--> +,- (left to right priority of given equation)]
    return 0;
}


//----------------------------------------------------------------------------------------------------------------------------------


// All operator(Arithmatic, relational, assignment, logical Operator) Precendence

// Top to bottom----priority high to low

// !

// *, /, %

// +, -

// <, <=, >, >=

// ==, !=

// &&

// ||

// =