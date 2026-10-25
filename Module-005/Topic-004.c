/*
  Topic: Reversing an Array Using the Two-Pointer Technique
  Description: Reversing the elements of an array in-place by maintaining 
               two pointers (one at the beginning and one at the end) and 
               swapping their values while moving them toward the center.

  --- DETAILED RECAP NOTES ---
  1. The Two-Pointer Approach:
     - Pointer `i` starts at the very beginning of the array (`0`).
     - Pointer `j` starts at the very end of the array (`n - 1`).
  
  2. Swapping Toward the Center:
     - The `while (i < j)` loop runs as long as `i` has not crossed `j`.
     - Inside the loop, we swap `a[i]` and `a[j]` using our trusty 3-step temporary 
       variable (`tmp`) swap technique.
     - After swapping, we move `i` forward (`i++`) and `j` backward (`j--`) to 
       process the next pair.

  3. In-Place Efficiency ($O(N)$ Time & $O(1)$ Extra Space):
     - This approach modifies the original array directly in memory without needing 
       a second auxiliary array, making it optimal and industry-standard for 
       reversal operations.
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
    
    int i = 0;
    int j = n - 1;
    
    // Two-pointer reversal logic
    while (i < j)
    {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;

        i++;
        j--;
    }
    
    // Printing the reversed array
    for (int k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }
    
    return 0;
}