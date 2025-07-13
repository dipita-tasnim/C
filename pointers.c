# include <stdio.h>

// concept 1
// int main() {

//     //let, value of age 22, address of age 2010
//     //let, address of _age 2011
//     //let, address of ptr 2013 

//     int age = 22;
//     int *ptr = &age; //&age = 2010, *ptr = 2010
//     int _age = *ptr; //*ptr = 2010, _age = 22 [2010 is the address of age , the value of age is 22]

//     printf("%d", _age); //22

//     return 0;
// }


//------------------------------------------------------------------------------------------------------------------------------------------------------

//Need to know-

// ~~~~~~Declaring pointers :~~~~~~~~
// int *ptr   --> Ex. int age=22
// char *ptr  --> Ex. char name='D'
// float *ptr --> Ex. float pi=3.1416

//~~~~~~Format Specifier:~~~~~~

//printing address
// int main() {
//     int age = 22;
//     int *ptr = &age;

//     printf("%u\n", &age);  //0061FF1C
//     printf("%u\n", ptr);   //0061FF1C----for *ptr the result will be 22.So, age = *ptr = 22
//     printf("%u\n", &ptr);  //0061FF18

// // if we want to see normal decimal values instead of hexadecimal we can use %u instead of %p. We can use this just to check/test the code what values it is giving to us.
// // It will be useful for us because we are declaring age as 22. If we do not use %p it will show 16 for 22. Then maybe we will face difficulty to understand because we need to do the extra work in our minf the converting part. If we use use %u then directly we see 22 and verify wheather the correct result we are seeing or not. Then once verifying if needed we can place %p instead of %u.

//     return 0;
// }

//------------------------------------------------------------------------------------------------------------------------------------------------------

//printing value

// int main() {
//     int age = 22;
//     int *ptr = &age;

//     printf("%d\n", age);  //22
//     printf("%d\n", *ptr); //22
//     printf("%d\n", *(&age)); //22
//     // printf("%d\n", ptr);  //0061FF1C----for *ptr the result will be 22.So, age = *ptr = 22
//     // printf("%d\n", &ptr); //0061FF18

//     return 0;
// }


// For printing address we use %p or %u
// For printing value we use %d
// Maybe this is best practice beacuse we examine that we can find the same result whatever we use just %u/%p or just %d 

//------------------------------------------------------------------------------------------------------------------------------------


