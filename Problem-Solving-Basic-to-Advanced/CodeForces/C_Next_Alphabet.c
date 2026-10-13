/*
  Problem Name: C. Next Alphabet
  Platform: Codeforces / Practice Set
  Time Limit: 1.0 Second
  Memory Limit: 256 MB

  Statement:
  Given a lowercase alphabet character, print the next character in the alphabet.
  Note: The next letter to 'z' is 'a'.

  Input Format:
  Only one line containing a lowercase English letter C.

  Output Format:
  Print the next letter to C in the alphabet.
*/

#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);

    // Special case: if the character is 'z', the next character is 'a'
    if (c == 'z')
    {
        printf("a\n");
    }
    else
    {
        // For any other lowercase letter, increment its ASCII value by 1
        c = c + 1;
        printf("%c\n", c);
    }

    return 0;
}