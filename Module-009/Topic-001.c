/*
  Introduction to Functions in C (Module 8)
  
  Description: A function is a self-contained block of code that performs a specific 
               task. It helps in code reusability, modularity, and easy debugging.
               Functions can take inputs (parameters) and return a value.
*/

#include <stdio.h>

// Function declaration / prototype
int sum(int a, int b);

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    // Function call
    int result = sum(num1, num2);
    
    printf("Sum = %d\n", result);
    return 0;
}

// Function definition
int sum(int a, int b)
{
    int total = a + b;
    return total;
}