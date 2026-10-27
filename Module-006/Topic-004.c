/*
  Topic: Finding the Length of a String Using `strlen`
  Description: Utilizing the built-in `strlen` function from the `<string.h>` library 
               to instantly calculate the length of a string.

  --- DETAILED RECAP NOTES ---
  1. The `<string.h>` Header:
     - To use built-in string manipulation functions like `strlen`, `strcpy`, or `strcmp`, 
       you must include the `<string.h>` header at the top of your program.

  2. How `strlen` Works:
     - It scans the string starting from the first character and counts every character 
       until it encounters the null terminator (`\0`).
     - It returns the length as an unsigned integer (`size_t`), which can be safely 
       stored in an `int` variable for standard use cases.

  3. What `strlen` Does NOT Count:
     - `strlen` counts only the actual characters of the string. It **excludes** the 
       hidden null terminator (`\0`) from its final count.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char a[500];
    scanf("%s", a); // Reads a single word up to the first space

    // Using strlen to get the exact size of the string instantly
    int sz = strlen(a);
    
    printf("%d", sz);
    
    return 0;
}