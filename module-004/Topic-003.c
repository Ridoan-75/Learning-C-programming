/*
  Topic: Array Input and Output Using Loops
  Description: Taking elements into an array of size 5 from the user using 
               a `for` loop and printing them out using another `for` loop.

  --- DETAILED RECAP NOTES ---
  1. Loop-based Traversal:
     - Instead of manually writing `ar[0]`, `ar[1]`, etc., we use a `for` loop 
       where the loop variable `i` acts as the dynamic index (from `0` to `4`).

  2. Important `scanf` Warning (`scanf("%d ", &ar[i])`):
     - Avoid putting a trailing space inside `scanf` (like `"%d "`). A whitespace 
     character in `scanf` forces it to wait and consume extra whitespace/characters 
     until a non-whitespace character appears, which can make the program feel stuck 
     or require extra keystrokes. Always use `scanf("%d", &ar[i])`.

  3. Condition Check:
     - `i <= 4` and `i < 5` do the exact same thing for an array of size 5 since 
       valid indices are `0, 1, 2, 3, 4`.
*/

#include <stdio.h>

int main()
{
    int ar[5];
    
    // Taking input loop
    for(int i = 0; i <= 4; i++){
      scanf("%d", &ar[i]);
    }
    
    // Output loop
    for(int i = 0; i <= 4; i++){
      printf("%d ", ar[i]);
    }
    
    return 0;
}