/*
  Topic: Codeforces Problem Solving - E. Lowest Number (Finding Min & Position)
  Description: Finding the minimum value in an array and its 1-based position, 
               utilizing `INT_MAX` for initialization.

  --- DETAILED RECAP NOTES ---
  1. Using `<limits.h>` and `INT_MAX`:
     - To find the minimum, we must initialize our `min` variable with a value 
       so large that any number in the array will be smaller than it. 
     - `INT_MAX` represents the maximum possible value for a standard 32-bit integer.

  2. Tracking Position (1-based Index):
     - The problem requires a **1-based index** (counting starts from 1, not 0). 
       That is why we save `min_idx = i + 1` instead of just `i`.

  3. Strict Comparison (`<`):
     - Using `if (a[i] < min)` ensures that if the minimum value appears multiple 
       times, we only capture the **first** occurrence because it won't update 
       on subsequent identical values.
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int min = INT_MAX; // Initialize with the highest possible integer
    int min_idx;       // To store the position of the minimum element
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            min_idx = i + 1; // 1-based index (i + 1)
        }
    }
    
    printf("%d %d", min, min_idx);
    
    return 0;
}