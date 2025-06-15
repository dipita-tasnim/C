//-----------------------------------------------------
//First program

# include<stdio.h>
int main()
{
    printf("Hello World");
    return 0;
}

//------------------------------------------------------



//variables & data types

# include<stdio.h>
int main()
{
    int number = 20;
    float pi = 3.1416;
    char name = 'Dipita';
    return 0;
}

//----------------------------------------------------------


//output

# include<stdio.h>
int main()
{
int age = 20;
float pi = 3.1416;
char star = '*';  //single quote must

printf("age is %d \n", age); // double quote must
printf("pi is %f \n", pi);   // double quote must
printf("star is %c \n", star);// double quote must

return 0;
}

//---------------------------------------------------------


//input Output

# include<stdio.h>

int main()
{
    int age;
    float pi;
    char star;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter pi: ");
    scanf("%f", &pi);

    printf("Enter star: ");
    scanf(" %c", &star);  //if this input is not taken in the terminal then put an space before %c. Now char input should be taken. This is a common problem might happen in C language.

    printf("age is %d \n", age);
    printf("pi is %f \n", pi);
    printf("star is %c \n", star);

    return 0;

}

//-----------------------------------------------------------