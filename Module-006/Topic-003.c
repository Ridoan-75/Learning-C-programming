/*
  Topic: Finding the Length of a String Manually
  Description: Traversing a string character by character until the null terminator 
               (`\0`) is reached, counting the total number of characters.

  --- DETAILED RECAP NOTES ---
  1. The Traversal Logic (`a[i] != '\0'`):
     - Since strings in C are null-terminated arrays of characters, the loop 
       continues running as long as it hasn't hit the `\0` character.
     - Every time it checks a character and finds it is not `\0`, it increments `count`.

  2. How `scanf("%s", a)` behaves:
     - `scanf` reads a single word/token (it stops reading when it encounters a space, 
       tab, or newline). If you need to measure the length of a string with spaces, 
       using `fgets(a, sizeof(a), stdin)` is necessary.

  3. Built-in Alternative (`strlen`):
     - While writing the manual loop builds great logic and algorithmic thinking, 
       C also provides a built-in function `strlen(a)` inside the `<string.h>` library 
       that calculates string length instantly.
*/

#include <stdio.h>

int main()
{
    char a[500];
    scanf("%s", a); // Reads a string (up to the first space)

    int count = 0;
    
    // Loop through each character until the null terminator '\0' is found
    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    
    printf("%d", count);
    
    return 0;
}