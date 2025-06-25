//Task 1

//Write a program to check if a student passed or failed.
//Marks > 30 is pass
//Marks <= 30 is fail

#include <stdio.h>

int main() {
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);

    if (marks > 30 && marks <= 100){
        printf("You have passed");
    }   
    else if (marks <= 30 && marks >= 0){
        printf("You have failed");
    } 
    else{
        printf("Wrong input");
    }    
    
    return 0;
}

//-------------------------------------------------------------------------------


//OR, By using Ternary Operator

int main() {
    int marks;
    printf ("Enter the marks: ");
    scanf("%d", &marks);

    marks <= 30 ? printf("You have failed") : printf("You have passed");

    return 0;
}


//-------------------------------------------------------------------------------------


//Task 2

// Write a program to give grades to a student
// marks < 30 is C
// 30 <= marks < 70 is B
// 70 <= marks < 90 is A
// 90 <= marks <= 100 is A+

int main() {
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);

    if (marks < 30 && marks >= 0){
        printf("C");
    }

    else if (marks >= 30 && marks < 70){
        printf("B");
    }

    else if (marks >= 70 && marks < 90){
        printf ("A");
    }    

    else if (marks >= 90 && marks <= 100){
        printf("A+");
    }

    return 0;
    
}


//-------------------------------------------------------------------------------------

//Task 3

//Write a program to find if a character entered by user is upper case or not.

int main () {

    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);  //for character %c must be used

    if (ch >= 'a' && ch <= 'z'){  //single quotation must be used. Not double.
        printf("Lower case");   
    }

    else if (ch >= 'A' && ch <= 'Z'){
        printf("Upper case");
    }

    else{
        printf("Not an English letter");
    }

    return 0;
}
