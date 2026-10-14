/*
  Topic: Accessing Elements of an Array
  Description: Declaring an array of size 10, assigning a value to a 
               specific index (ar[5]), and printing it.

  --- DETAILED RECAP NOTES ---
  1. Array Declaration: 
     - `int ar[10];` creates an integer array named `ar` that can hold 10 elements.
     - The indices for this array range from 0 to 9 (`ar[0]` up to `ar[9]`).

  2. Element Access & Assignment:
     - `ar[5] = 50;` targets the 6th position in memory (since counting starts at 0) 
       and stores the integer value `50` inside it.
     - Indexing allows us to directly access, modify, or retrieve data at any 
       specific slot instantly without looping through the whole array.

  3. Printing Output:
     - `printf("%d", ar[5]);` retrieves the value stored at index 5 and prints it 
       to the console, which will output `50`.
*/

#include <stdio.h>

int main()
{
    int ar[10];
    ar[5] = 50;
    printf("%d", ar[5]);
    return 0;
}