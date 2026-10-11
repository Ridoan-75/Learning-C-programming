/*
  Problem Name: M. Capital or Small or Digit
  Platform: Codeforces / Practice Set
  Time Limit: 1.0 Second
  Memory Limit: 256 MB

  Statement:
  Given a character X, determine whether it is a Digit or an Alphabet. 
  If it is an Alphabet, determine if it is Capital or Small case.

  Input Format:
  A single character X.

  Output Format:
  - "IS DIGIT" if X is a digit.
  - "ALPHA" followed by "IS SMALL" or "IS CAPITAL" on the next line if X is an alphabet.
*/

#include <stdio.h>

int main()
{
    char X;
    scanf("%c", &X);

    // Check if the character is a numeric digit ('0' through '9')
    if (X >= '0' && X <= '9')
    {
        printf("IS DIGIT\n");
    }
    else
    {
        // If not a digit, it is an alphabet
        printf("ALPHA\n");

        // Check if the alphabet is lowercase ('a' through 'z')
        if (X >= 'a' && X <= 'z')
        {
            printf("IS SMALL\n");
        }
        else
        {
            // Otherwise, it must be uppercase ('A' through 'Z')
            printf("IS CAPITAL\n");
        }
    }

    return 0;
}