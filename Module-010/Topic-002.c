/*
  Topic: Dereferencing a Pointer in C
  
  What is Dereferencing & Its Purpose:
  - Definition: Dereferencing means accessing or modifying the value stored at the 
    memory address held by a pointer, using the asterisk (*) operator.
  - Purpose: 
    1. It allows you to look at the actual value residing inside the memory address 
       that the pointer is pointing to.
    2. It lets you directly modify/update the value of the original variable from 
       anywhere in your program without needing direct scope access.
*/

#include <stdio.h>
int main()
{
     int x = 10;
     printf("%d\n", x);
     printf("%p\n", &x);

     int *ptr;
     ptr = &x;
     
     // Dereferencing the pointer to change the value of x directly through its memory address
     *ptr = 100; 
     
     printf("%p\n", ptr);
     printf("%d\n", x); // x is now 100 because *ptr modified it at its address

     return 0;
}