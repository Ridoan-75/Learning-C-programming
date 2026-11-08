/*
  Problem Name: Print from N to 1 Using Recursion
  
  What needs to be fixed in your code:
  1. Base Case: 
     - In your code, `if (i == 100)` means it will keep going down from 5 (`5, 4, 3, 2, 1, 0, -1...`) and will never reach 100, causing an infinite loop (Stack Overflow).
     - To print from N down to 1, the base case should stop when `i == 0` (or when `i < 1`).
  
  2. Order of Print & Recursive Call:
     - To print from N down to 1, you should print the current value of `i` first, and then call the function with `i - 1`.
*/

#include <stdio.h>

void hello(int i)
{
    // Base case: stop when i drops below 1
    if (i == 0)
    {
        return;
    }
    
    printf("%d\n", i);
    
    // Recursive call moving towards the base case (decrementing)
    hello(i - 1);
}

int main()
{
    int i = 5; // You can also use scanf("%d", &i); to take N as input dynamically
    hello(i);
    return 0;
}