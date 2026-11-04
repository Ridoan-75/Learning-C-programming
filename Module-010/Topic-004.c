/*
  Topic: Pass by Reference in C Programming
  
  What is Pass by Reference & Its Purpose:
  - Definition: A technique where the memory address of a variable is passed to a 
    function (using pointers), allowing the function to directly access and modify 
    the original variable's value in memory.
  - Purpose: 
    1. Enables a function to modify variables outside its own local scope.
    2. Allows a function to affect changes globally across different scopes 
       (like modifying `main` variables from inside another function).
*/

#include <stdio.h>

void fun(int *p){
    *p = 20; // Dereferencing the pointer to change the original value of x in main
    // printf("fun %p\n", p);
}

int main()
{
    int x = 10;
    fun(&x); // Passing the memory address of x (Pass by Reference)
    printf("%d\n", x); // x becomes 20 because it was modified via its address
    // printf("main %p\n", &x);
    return 0;
}