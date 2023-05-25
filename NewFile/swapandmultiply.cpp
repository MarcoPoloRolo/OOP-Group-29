#include <iostream>
#include "swapandmultiply.h"

void swap(int* a, int* b) //Function to swap between two integers using pointers
{
    int swapval = *a; //Storing the value in a variable by the value of pointed to 'a'
    *a = *b;          //Storing the value pointed to 'a' by the value of pointed to 'b'
    *b = swapval;     //Storing the value pointed to 'b' by the swapped variable
}

void swap(int& a, int& b) //Function to swap between two integers using references
{
    int swapval = a;    //Storing the value of a in the swap variable
    a = b;              //Storing the value of b in a
    b = swapval;        //Storing the value of the swapped variable in b
}
int multiply(int num1, int num2, int num3) //Function to multiply three integers with third number set default as '1'
{
    num3 = 1;                               //setting the num3 as '1'
    int product = num1 * num2 * num3;       //Multiplying all 3 int
    return product;
}

double multiply(double num1, double num2) //Function to multiply two double under the same function name but the data type as double
{
    double product = num1 * num2;           //Multiplying the two values
    return product;
}
int multiply(int num1, int num2)    //Function to show to the example for function overloading.
{
    int product = num1 * num2;
    return product;
}