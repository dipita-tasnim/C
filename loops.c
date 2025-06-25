// Task 1

// Print the numbers from 0 to 10

#include <stdio.h>

int main () {
    for(int i=0; i<=10; i++){
        printf("%d\n", i);
    }

    return 0;
}

//-----------------------------------------------------------------------------------------------------------------

//By using while loop

int main() {

    int i = 0;
    while(i<=10){
        printf("%d\n", i);
        i++;
    }
    return 0;
}

//--------------------------------------------------------------------------------------------------------------------

//Task 2

// Print the numbers from 0 to n. If n is given by user.

int main() {

    printf("Enter the number: ");
    int num;
    scanf("%d", &num);

    for(int i=0; i<=num; i++){
        printf("%d\n", i);
    }

    return 0;
}

//------------------------------------------------------------------------------------------------------------------------

//By using while loop

int main() {

    printf("Enter the number: ");
    int num;
    scanf("%d", &num);

    int i = 0;
    while (i <= num){
        printf("%d\n", i);
        i++;
    }
    return 0;
}

//-----------------------------------------------------------------------------------------------------------------------------


//do-while loop.
//do-while loop is used when our program must run atleast one time.
// print 1 to 5

int main() {
    int i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while (i<=5);
    
    return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------

// Task 3

// print the sum of first n natural numbers

int main() {
    printf("Enter the number: ");
    int num;
    scanf("%d", &num);

    int sum = 0;
    for (int i=1; i<=num; i++){
        sum = sum + i;
    }
    printf("The sum is %d", sum);

    return 0;

}

//-----------------------------------------------------------------------------------------------------------------------------------
// Task 4

// Print the table of a number input by the user.

int main() {

    printf("Enter the number: ");
    int num;
    scanf("%d", &num);

    int result = 1;
    for (int i=1; i<=10; i++){
        result = num * i;
        printf("%d\n", result);  //OR, printf("%d"\n, n*i)
    }

    return 0;

}

//-----------------------------------------------------------------------------------------------------------------------------------
// Task 5

// Keep taking numbers as input from user until user enters an odd number.

int main() {
    int num;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        
        if(num % 2 != 0){
            break;
        }

    }while(1);

    printf("Thank you");

    return 0;

}

//-----------------------------------------------------------------------------------------------------------------------------------

// Task 6

// Keep taking numbers as input from user until user enters a number which is multiple of 7.

int main() {

    int num;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num % 7 == 0){
            break;
        }
    } while (1);

    printf("Thank you");

    return 0;
}

//-----------------------------------------------------------------------------------------------------------------------------------

// Task 7

// Print all the odd numbers from 5 to 50.

int main() {

    for (int i=5; i<=50; i++){
        if (i % 2 != 0){
            printf("%d\n", i);
        }
    }

}


//-----------------------------------------------------------------------------------------------------------------------------------
// Task 8

// Print the factorial of a number n.

int main() {

    printf("Enter the number: ");
    int num;
    scanf("%d", &num);

    int factorial = num; //OR, factorial = 1
    for (int i=(num-1); i>=1; i--){   //OR, for (int i=1; i<=num; i++)
        factorial = factorial * i;  //should not use input variable. should use another variable
    }
    printf("The factorial is %d", factorial);

    return 0;

}

//-----------------------------------------------------------------------------------------------------------------------------------

// Task 9

// Print reverse of the table for a number n.

int main() {

    printf("Enter a number: ");
    int num;
    scanf("%d", &num);

    for (int i=10; i>=1; i--){  //Here this is not applicable--> for (int i=1; i<=10; i++) because we want to print it in a reverse order.
        int result = num * i;
        printf("%d\n", result);
    }
}


//-----------------------------------------------------------------------------------------------------------------------------------