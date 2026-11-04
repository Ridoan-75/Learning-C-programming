/*
  Topic: Pass by Value in C Programming
  
  What is Pass by Value & Its Purpose:
  - Definition: A method of passing arguments to a function where a copy of 
    the variable's value is passed, rather than its memory address.
  - Purpose: 
    1. Ensures that local variables inside functions remain isolated and cannot 
       accidentally modify the original data in the calling function.
    2. Safe for read-only operations where original data preservation is required.
*/

#include <stdio.h>

void fun(int x){
    x = 20;
    printf("fun %p\n", &x);
}

int main()
{
    int x = 10;
    fun(x);
    // printf("%d", x);
    printf("main %p\n", &x);
    return 0;
}