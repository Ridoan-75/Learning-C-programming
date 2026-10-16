/*
  Topic: Codeforces Problem Solving - C. Replacement
  Description: Replacing every positive number in an array with `1`, every negative 
               number with `2`, and leaving zeros unchanged, then printing the array.

  --- DETAILED RECAP NOTES ---
  1. In-Place Modification vs. Direct Printing:
     - The problem asks to "Replace" the numbers. It's best practice to actually update 
       the array elements in-place (`a[i] = 1` or `a[i] = 2`) in a loop, and then print 
       the updated array in a separate loop (or right away).
  
  2. Fixing the Minor Bug in Your Code:
     - In your code, you wrote `printf("1 ", i);`. The format string `"1 "` has no 
       placeholder (like `%d`), so passing `i` as an extra argument is redundant. 
       If you want to print the value, you should update `a[i]` first, then print `a[i]`.

  3. Logic Breakdown:
     - If `a[i] > 0`, change/print `1`.
     - If `a[i] < 0`, change/print `2`.
     - If `a[i] == 0`, leave it as `0`.
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
    
    // Modifying and printing the array according to the rules
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            a[i] = 1; // Replace positive with 1
        }
        else if (a[i] < 0)
        {
            a[i] = 2; // Replace negative with 2
        }
        // Zero remains unchanged (a[i] = 0)
        
        printf("%d ", a[i]);
    }
    
    return 0;
}