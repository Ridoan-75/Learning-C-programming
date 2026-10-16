/*
  Topic: Codeforces Problem Solving - D. Positions in Array
  Description: Iterating through an array of size `n`, checking which elements 
               are less than or equal to 10, and printing their index and value 
               in the format "A[i] = X".

  --- DETAILED RECAP NOTES ---
  1. Conditional Filtering:
     - We run a loop through the array and use an `if (a[i] <= 10)` condition to 
       filter out values that satisfy the problem constraint.

  2. Formatted Output:
     - `printf("A[%d] = %d\n", i, a[i]);` dynamically prints the exact index `i` 
       along with the stored value `a[i]` on a new line each time a match is found.

  3. Clean & Optimal:
     - The code uses a straightforward linear traversal, checking every element 
       sequentially with $O(N)$ time complexity.
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Checking elements and printing their index and value if <= 10
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 10)
        {
            printf("A[%d] = %d\n", i, a[i]);
        }
    }
    
    return 0;
}