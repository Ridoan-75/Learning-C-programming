// Topic 001: Arithmetic Operators
// File: topic-001.c

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    int sum = a + b;   // Addition (+)
    printf("summation = %d\n", sum);

    int sub = a - b;   // Subtraction (-)
    printf("subtraction = %d\n", sub);

    int multi = a * b; // Multiplication (*)
    printf("multiplication = %d\n", multi);

    int divi = a / b;  // Integer Division (/)
    printf("division = %d\n", divi);

    int mod = a % b;   // Modulus (%) - remainder of division
    printf("modulus = %d\n", mod);

    return 0;
}