/*
  Topic: Codeforces Problem Solving - F. Reversing
  Description: Reversing an array in-place using the two-pointer technique 
               without utilizing any built-in functions, adhering to constraints ($N \le 10^3$).

  --- DETAILED RECAP NOTES ---
  1. Two-Pointer Approach for Reversal:
     - We set `i = 0` (left pointer) and `j = n - 1` (right pointer).
     - Inside the `while (i < j)` loop, we swap elements symmetrically from the 
       outside edges inward toward the center using a temporary variable `tmp`.

  2. Constraints & Types Check:
     - $N$ goes up to $10^3$, and array elements $A_i$ go up to $10^9$. 
     - Since we are only swapping positions and printing (not performing arithmetic sums), 
       standard `int` arrays are sufficient to hold the values.

  3. Loop Variable Separation:
     - Notice the output loop uses `int k = 0` instead of reusing `i`. This is clean practice 
       because `i` was already modified and advanced during the two-pointer swap phase.
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int i = 0;
    int j = n - 1;
    
    // Swap elements from both ends towards the center
    while(i < j)
    {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;

        i++;
        j--;
    }
    
    // Print the reversed array
    for(int k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }
    
    return 0;
}