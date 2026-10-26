/*
  Topic: String Input with Spaces Using `fgets`
  Description: Reading a full line of text including spaces from standard input 
               into a character array (string) safely using `fgets`.

  --- DETAILED RECAP NOTES ---
  1. Why `fgets` instead of `scanf("%s", ...)`?
     - `scanf("%s")` stops reading as soon as it encounters a space or newline. 
       To read sentences or strings with spaces (like "Hello World"), `fgets` is required.

  2. Understanding `fgets` Parameters:
     - `fgets(a, 20, stdin);` takes three arguments:
       - **Destination Buffer (`a`):** The character array where the input will be stored.
       - **Size Limit (`20`):** The maximum number of characters to read minus one 
         (to reserve space for the null terminator `\0`). It prevents buffer overflows.
       - **Input Stream (`stdin`):** Specifies that input is coming from the standard keyboard input.

  3. Array Size vs. `fgets` Size Discrepancy Note:
     - In your code, your array `a` has a capacity of `500` bytes (`char a[500];`), but 
       `fgets` is limited to `20`. This means it will only read up to 19 characters. 
       To utilize the full array safely, it's best to use `sizeof(a)` or match the array size:
       `fgets(a, sizeof(a), stdin);`.

  4. Handling the Newline (`\n`) Character:
     - Unlike `scanf`, `fgets` retains the newline character (`\n`) if the user presses 
       `Enter` within the size limit and there is room in the buffer.
*/

#include <stdio.h>

int main()
{
    char a[500];
    
    // Safely reading input with spaces up to the array's full capacity
    fgets(a, sizeof(a), stdin);
    
    printf("%s", a);
    
    return 0;
}