#include <stdio.h>


int main(){
    int marks[3];
    
    printf("Enter phy: ");
    scanf("%d", &marks[0]);
    
    printf("Enter chem: ");
    scanf("%d", &marks[1]);
    
    printf("Enter math: ");
    scanf("%d", &marks[2]);
    
    printf("%d %d %d\n", marks[0], marks[1], marks[2]);
    printf("[phy, chem, math]: [%d, %d, %d]\n", marks[0], marks[1], marks[2]);
    
    return 0;
}





//---------------------------------------------------------------------------------------------------------------------------



//Write a program to enter price of 3 items and print their final cost with 5% tax.

int main(){

    float items[3];
    float total;
    
    printf("Enter price of item1: ");
    scanf("%f", &items[0]);
    items[0] = items[0] + (0.05*items[0]);
    printf("amout: %f\n", items[0]);
    
    printf("Enter price of item2: ");
    scanf("%f", &items[1]);
    items[1] = items[1] + (0.05*items[1]);
    printf("amout: %f\n", items[1]);
    
    printf("Enter price of item3: ");
    scanf("%f", &items[2]);
    items[2] = items[2] + (0.05*items[2]);
    printf("amout: %f\n", items[2]);
    
    printf("Total amout: %f\n", items[0] + items[1] + items[2]);
    
    
    return 0;
    

}


//-----------------------------------------------------------------------------------------------------------------------------------



//print numbers from 1 to 6 from an array

int main(){

    int numbers[] = {1, 2, 3, 4, 5, 6};
    
    for (int i=0; i<6; i++){
        printf("%d\n", numbers[i]);
    
    }
    
    return 0;
}


//--------------------------------------------------------------------------------------------------------------------------------------------


//print odd numbers from 1 to 10 in an array format

int main(){
    
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int odd_numbers[10];
    int j = 0;
    
    for (int i=0; i<10; i++){
        if (numbers[i] % 2 != 0){
            odd_numbers[j] = numbers[i];
            j++;
        }
    }
    
    printf("Odd numbers: ");
    for (int i=0; i<j; i++){
        printf("%d ", odd_numbers[i]);
    
    }
    
    printf("\n");
    
    return 0;
}


//----------------------------------------------------------------------------------------------------------------------------------------------------------


//2D array

//store phy, chem, math marks for 2 students using 2D array.

int main(){
    
    int marks[2][3];
    
    marks[0][0] = 70; //phy for student1 
    marks[0][1] = 75; //chem for student1
    marks[0][2] = 78; //math for student1
    
    marks[1][0] = 80; //phy for student2
    marks[1][1] = 85; //chem for student2
    marks[1][2] = 88; //math for student2
    
    printf("%d\t%d\n", marks[0][0], marks[1][0]); //showing phy marks for student1 and student2

    return 0;
}



//---------------------------------------------------------------------------------------------------------------------------------------------------------------


// Reverse an array

int main(){
    
    int arr[] = {10, 20, 30, 40, 50};
    
    //reverse the array
    for(int i=0; i<5/2; i++){
        int first_val = arr[i];
        int second_val = arr[5-i-1];
        arr[i] = second_val;
        arr[i] = second_val;
        arr[5-i-1] = first_val;
    }
    
    //print the array
    for(int i=0; i<5; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}



//--------------------------------------------------------------------------------------------------------------------------------------------------------------

// Write a program to store the first 10 fibonacci numbers

int main(){

    int fibonacci[10];
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    
    for(int i=2; i<10; i++){
        fibonacci[i] = (fibonacci[i-1] + fibonacci[i-2]);
    
    }
    
    //print
    for(int i=0; i<10; i++){
        printf("%d\t", fibonacci[i]);
    }
    
    printf("\n");
    

    return 0;
}


//-------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Table of 2 and 3

int main(){

    int table[2][10];
    
    for(int i=1; i<=10; i++){
        table[0][i] = 2 * i;
        printf("%d\t", table[0][i]);
    }
    printf("\n");
    
    for(int i=1; i<=10; i++){
        table[1][i] = 3 * i;
        printf("%d\t", table[1][i]);    

    }
    printf("\n");
    
    return 0;
}


//------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Create this array: {{1, 2}, {3, 4}, {5, 6}};

int main(){

    int arr[3][2];
    int num = 1;
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            arr[i][j] = num;
            num++;
            printf("arr[%d][%d] = %d\n", i,j, arr[i][j]);
        }
    }

    return 0;
}


//---------------------------------------------------------------------------------------------------------------------------------------------------------------------

//finding the length of an array. (in C language there is no length function)

int main(){
    
    int arr[] = {1,2,3,4,5,6,7};
    
    printf("length: %zu\n", sizeof(arr)/sizeof(int));
    
    return 0;
}


//---------------------------------------------------------------------------------------------------------------------------------------------------------------------

//pointer basic

int main(){
    
    int x = 20;
    int *ptr;
    
    ptr = &x;
    
    printf("%p\n", &x);   // x address
    printf("%d\n", x);    // x value
    printf("%p\n", ptr);  //ptr address [equal to x address]
    printf("%d\n", *ptr); //ptr value [equal to x value]

    return 0;
}



//---------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Array with pointer
// Showing each element and their corresponding addresses of an array

int main(){
    
    int arr[3] = {10,20,30};
    int *ptr;
    
    ptr = arr; // No "&" used here
    
    for(int i=0; i<3; i++){
        printf("Address of arr[%d] = %p\n", i, ptr); //address of arr[i]
        printf("Value of arr[%d] = %d\n", i, *ptr);  //value   of arr[i]
        ptr++;  // incrementing 4 bytes
    }
    
    
    return 0;
}





