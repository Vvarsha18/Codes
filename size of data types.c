//C program  to display The Display Size of the Different Data Types
#include<stdio.h>
int main()
{
    int Int;
    float Float;
    double Double;
    char Char;

    // sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes\n", sizeof(Int));
    printf("Size of float: %zu bytes\n", sizeof(Float));
    printf("Size of double: %zu bytes\n", sizeof(Double));
    printf("Size of char: %zu byte\n", sizeof(Char));
    
    return 0;
}

