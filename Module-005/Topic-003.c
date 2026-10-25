/*
  Topic: Swapping Two Values Using a Temporary Variable
  Description: Exchanging the values of two variables (`a` and `b`) so that 
               `a` takes the value of `b` and `b` takes the original value of `a`.

  --- DETAILED RECAP NOTES ---
  1. The Data Loss Problem:
     - If you try to swap directly like `a = b; b = a;`, the original value of `a` 
       is overwritten immediately by `b`, meaning `a`'s value is permanently lost 
       before `b` can receive it.

  2. The Temporary Container (`temp`):
     - To prevent data loss, we introduce a third temporary variable (`temp`).
     - **Step 1 (`temp = a;`):** Safely back up the value of `a` in `temp`.
     - **Step 2 (`a = b;`):** Overwrite `a` with the value of `b`.
     - **Step 3 (`b = temp;`):** Assign the backed-up original value of `a` (currently in `temp`) to `b`.

  3. Significance in Arrays:
     - This 3-step swap technique is a foundational building block used extensively 
       later for sorting algorithms (like Bubble Sort) and reversing arrays in place.
*/

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    
    // 3-step swapping logic
    int temp = a; // Step 1: Save 'a' in temp
    a = b;        // Step 2: Assign 'b' to 'a'
    b = temp;     // Step 3: Assign saved 'a' (from temp) to 'b'
    
    printf("A = %d\nB = %d", a, b);
    
    return 0;
}