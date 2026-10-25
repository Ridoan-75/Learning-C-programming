/*
  Topic: Inserting an Element into an Array
  Description: Inserting a new value at a specific index by shifting existing 
               elements to the right to make space.

  --- DETAILED RECAP NOTES ---
  1. Extra Capacity (`n + 1`):
     - Since we are adding a new element, the final array will have `n + 1` elements. 
       We declare the array with size `n + 1` (`int a[n+1];`) so there is enough 
       memory space for the new item without overflowing.

  2. Input Loop Correction (`i < n`):
     - Since the input provides `n` initial elements, the input loop must run from 
       `0` to `n - 1` (`i < n`). Using `<= n` would mistakenly read `n + 1` elements 
       and interfere with reading `idx` and `val`.

  3. Right-to-Left Shifting Logic:
     - To create an open slot at index `idx`, we must shift elements to the right.
     - We start from the very end (`n`) and move backwards down to `idx + 1`: 
       `a[i] = a[i-1];`. 
     - **Crucial Rule:** Always shift from right to left. If you shift from left to 
       right, you will overwrite adjacent elements and lose data.

  4. Final Output (`0` to `n`):
     - After inserting `val` at `a[idx]`, the total number of elements becomes `n + 1`, 
       so the output loop runs from `0` to `n`.
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int a[n + 1]; // Array size is n + 1 to fit the inserted element
    
    // Taking initial n elements
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int idx, val;
    scanf("%d %d", &idx, &val);
    
    // Shifting elements to the right from the end down to idx + 1
    for(int i = n; i >= idx + 1; i--)
    {
        a[i] = a[i - 1];
    }
    
    // Inserting the new value at the target index
    a[idx] = val;
    
    // Printing the updated array of size n + 1
    for(int i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}