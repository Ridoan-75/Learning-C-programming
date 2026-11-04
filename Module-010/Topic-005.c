/*
  Topic: Why we use reference (& operator) in scanf()
  
  Explanation & Purpose:
  - Definition: scanf() requires the memory address of a variable (using the address-of operator '&') 
    to store the user's input directly into that variable's storage location in RAM.
  - Purpose: 
    1. C functions use "pass by value" by default. If we passed just the variable name (e.g., `n`), 
       scanf() would only receive a local copy, and the actual variable in `main()` would remain unchanged.
    2. By passing the memory address (`&n`), scanf() can dereference and write the keyboard input 
       directly into the original memory slot, updating its value globally across scopes.
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    
    // &n provides the exact memory address where the input value should be written
    scanf("%d", &n);
    
    printf("You entered: %d\n", n);
    
    return 0;
}