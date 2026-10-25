/*
  Topic: Removing an Element from an Array
  Description: Deleting an element at a specific index by shifting subsequent 
               elements to the left and reducing the logical size of the array.

  --- DETAILED RECAP NOTES ---
  1. Array Size Bug Correction (`int a[n]` vs `int a[n - 1]`):
     - In your original code, `int a[n - 1];` was declared before taking input for 
       `n` elements. Since you are reading `n` elements *initially*, the array must 
       have a capacity of at least `n` (`int a[n];`). Declaring `n - 1` initially 
       causes an **Array Out of Bounds** write when trying to store the `n` input values.

  2. Left-to-Right Shifting Logic for Deletion:
     - To remove an element at index `idx`, we pull all elements from the right side 
       one step to the left.
     - The loop runs from `i = idx` up to `n - 1`, assigning `a[i] = a[i + 1];`. 
     - This overwrites the target element and shifts the remaining sequence leftward.

  3. Logical Size Reduction (`n--`):
     - After shifting, the total number of valid elements decreases by 1. Decrementing 
       `n` (`n--`) ensures that the final output loop only prints the remaining 
       `n - 1` elements, ignoring the duplicated trailing value at the end.
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int a[n]; // Fixed: Array size must be 'n' to store the initial inputs safely
    
    // Taking initial n elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int idx;
    scanf("%d", &idx);
    
    // Shifting elements to the left from idx to n - 1
    for (int i = idx; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    
    // Reduce the logical size of the array
    n--;
    
    // Printing the updated array of size n - 1
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}