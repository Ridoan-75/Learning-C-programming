/*
  Problem Name: P. First digit!
  Platform: Codeforces / Practice Set
  Time Limit: 0.25 Seconds
  Memory Limit: 64 MB

  Statement:
  Given a number X (4 digits, 999 < X <= 9999), print "EVEN" if the 
  first digit of X is an even number. Otherwise print "ODD".

  Constraints:
  999 < X <= 9999

  Input Format:
  Only one line containing a number X.

  Output Format:
  Print "EVEN" or "ODD" based on the parity of the first digit.

  Examples:
  Input:  4569  --> Output: EVEN
  Input:  3569  --> Output: ODD
*/

#include <stdio.h>

int main()
{
    long long int X;
    scanf("%lld", &X);

    // Extracting the first digit of a 4-digit number by integer division
    int first_digit = X / 1000;

    // Check if the first digit is even or odd
    if (first_digit % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }

    return 0;
}