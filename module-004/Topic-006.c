/*
  Topic: Sum of All Values in an Array
  Description: Taking an array of size `n` from the user, summing up all 
               its elements using a loop, and printing the total result.

  --- DETAILED RECAP NOTES ---
  1. Accumulator Variable (`sum`):
     - We initialize `sum = 0` before the loop. If we don't initialize it to 
       zero, it will pick up a garbage value and give an incorrect output.
  
  2. Summation Logic:
     - Inside the loop, `sum = sum + a[i]` (or shorthand `sum += a[i]`) adds each 
       array element to the running total one by one.

  3. Bug Fix in Input Loop (`i <= n` vs `i < n`):
     - In your original code, the input loop used `i <= n`. For an array of size `n`, 
       valid indices are `0` to `n-1`. Using `<=` goes up to index `n`, which causes 
       an **Array Out of Bounds** error. It must be strictly `i < n`.
*/

#include <stdio.h>

int main()
{
   int n;
   scanf("%d", &n);
   
   int a[n];
   
   // Taking input (Fixed: changed i <= n to i < n to prevent out-of-bounds)
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &a[i]);
   }
   
   int sum = 0; // Initializing accumulator
   
   // Calculating sum
   for (int i = 0; i < n; i++)
   {
      sum = sum + a[i];
   }
   
   printf("%d", sum);
   
   return 0;
}