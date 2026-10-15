/*
  Topic: Reverse Printing of an Array
  Description: Taking an array of size `n` from the user, storing elements 
               normally, and then printing them in reverse order.

  --- DETAILED RECAP NOTES ---
  1. Variable Length Array (VLA):
     - `int a[n];` allocates an array size dynamically based on user input `n` at runtime.

  2. Forward Input:
     - The first loop runs from `i = 0` to `i < n`, storing user inputs sequentially 
       from the first index up to the last index (`a[0]` to `a[n-1]`).

  3. Reverse Traversal & Printing:
     - To print in reverse, the second loop starts at the very last valid index (`i = n - 1`).
     - It decrements `i` (`i--`) in each step until it reaches index `0` (`i >= 0`).
     - This outputs the elements from last to first.
*/

#include <stdio.h>

int main()
{
   int n;
   scanf("%d", &n);
   int a[n];
   
   // Taking input normally
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &a[i]);
   }
   
   // Printing in reverse order
   for (int i = n - 1; i >= 0; i--)
   {
      printf("%d ", a[i]);
   }
   
   return 0;
}