/*
  Problem Name: Capital or Small / Letter Conversion
  Platform: Codeforces / Practice Set
  Time Limit: 1.0 Second
  Memory Limit: 64 MB

  Statement:
  Given a letter X. If the letter is lowercase, convert it to uppercase and print. 
  Otherwise, convert it from uppercase to lowercase and print.
  Note: The difference between 'a' and 'A' in ASCII is 32.

  Input Format:
  Only one line containing a character X (capital or small letter).

  Output Format:
  Print the converted letter.

  Examples:
  Input: a  --> Output: A
  Input: A  --> Output: a
*/

#include <stdio.h>

int main()
{
    char X;
    scanf("%c", &X);

    // Check if the character is a lowercase letter
    if (X >= 'a' && X <= 'z')
    {
        // Convert lowercase to uppercase by subtracting 32 from its ASCII value
        X = X - 32;
        printf("%c\n", X);
    }
    else
    {
        // Convert uppercase to lowercase by adding 32 to its ASCII value
        X = X + 32;
        printf("%c\n", X);
    }

    return 0;
}