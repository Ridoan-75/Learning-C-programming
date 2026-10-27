/*
  Topic: Codeforces Problem Solving - E. Count (Sum of Digits in a String)
  Description: Reading a large numeric string of digits ('0' to '9') and calculating 
               the mathematical sum of all its digits.

  --- DETAILED RECAP NOTES ---
  1. Handling Large Strings (`10^6` elements):
     - The constraint specifies that the string length $|S|$ can be up to $1,000,000$. 
       We declare a character array of size `1000001` (`char s[1000001];`) to accommodate 
       the one million characters plus the trailing null terminator (`\0`).

  2. Character-to-Integer Conversion (`s[i] - 48` or `s[i] - '0'`):
     - Characters in C are stored as ASCII values. For example, the character `'0'` 
       has an ASCII value of `48`, `'1'` is `49`, and so on up to `'9'` (`57`).
     - To convert a digit character to its actual numeric integer value, we subtract 
       `48` (or `'0'`) from it: `s[i] - '0'`.

  3. Potential Sum Overflow Check:
     - Since $|S|$ can be up to $1,000,000$ and each digit can be at most `9`, the maximum 
       possible sum is $1,000,000 \times 9 = 9,000,000$. 
     - A standard 32-bit signed integer (`int`) can hold values up to ~2.14 billion, 
       so `int sum = 0;` is completely safe and won't overflow for this problem.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // Array sized to hold up to 1,000,000 digits plus the null terminator
    char s[1000001];
    scanf("%s", s);
    
    int length = strlen(s);
    int sum = 0;
    
    // Loop through each character, convert it to its numeric value, and add to sum
    for(int i = 0; i < length; i++)
    {
        sum = sum + (s[i] - '0'); // Converting character digit to integer value
    }
    
    printf("%d\n", sum);
    
    return 0;
}