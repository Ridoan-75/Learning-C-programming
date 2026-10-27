/*
  Topic: Copy elements from 2 arrays to another array
  Description: Combining the elements of two separate arrays (`a` of size `n` and 
               `b` of size `m`) sequentially into a new array (`c`) of size `n + m`.

  --- DETAILED RECAP NOTES ---
  1. Resulting Array Capacity (`n + m`):
     - The third array `c` must have enough space to hold all elements from both 
       arrays combined, so its size is declared as `n + m`.

  2. Copying the First Array (`a`):
     - We loop from `i = 0` to `n - 1` and place each element directly into 
       `c[i] = a[i]`. This fills the first `n` slots of `c`.

  3. Copying the Second Array (`b`):
     - To place array `b` right after array `a`, we start our index offset at `n`. 
       As `i` goes from `0` to `m - 1`, we assign `c[n + i] = b[i]`. This correctly 
       appends `b` without overlapping or leaving gaps.
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

    int m;
    scanf("%d", &m);
    int b[m];
    for(int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    // Resulting array of size n + m
    int c[n + m]; 

    // Copying array 'a' into the beginning of 'c'
    for(int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }

    // Copying array 'b' immediately after array 'a' in 'c'
    for(int i = 0; i < m; i++)
    {
        c[n + i] = b[i];
    }

    // Printing the merged array
    for(int i = 0; i < n + m; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}