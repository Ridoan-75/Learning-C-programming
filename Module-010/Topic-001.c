/*
  Topic: Pointers in C (Introduction & Memory Management)
  
  What is a Pointer & Its Purpose:
  - Definition: A pointer is a special variable that stores the memory address 
    of another variable instead of its actual value.
  - Purpose (Why we use pointers):
    1. Direct memory access and efficient handling of hardware/memory.
    2. Passing large structures or arrays to functions by reference (avoiding copying).
    3. Dynamic memory allocation (using malloc, calloc) and building complex data structures (linked lists, trees, graphs).
*/

#include <stdio.h>
int main()
{
    int x = 10; // Declaring a normal variable x holding value 10
    printf("Value of x: %d\n", x);
    printf("Memory address of x (&x): %p\n", &x); // Prints the exact RAM address where x lives

    int *ptr;   // Declaring an integer pointer variable to hold an address
    ptr = &x;   // Storing the memory address of x inside the pointer 'ptr'
    
    printf("Address stored inside ptr: %p\n", ptr);    // Same as &x
    printf("Memory address of ptr itself (&ptr): %p\n", &ptr); // The address where pointer ptr is stored

    return 0;
}