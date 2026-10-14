/*
  Problem Name: I. Lucky Numbers
  Platform: Codeforces / Practice Set
  Time Limit: 1.0 Second
  Memory Limit: 256 MB

  Statement:
  A number of two digits is lucky if one of its digits is divisible by the other.
  Given a number between 10 and 99, determine whether it is lucky or not.

  Constraints:
  10 <= N <= 99

  Input Format:
  Only one line containing a single number N.

  Output Format:
  Print "YES" if the given number is lucky, otherwise print "NO".
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int first = n / 10; // Extracts the tens digit
    int last = n % 10;  // Extracts the units digit

    // Check if one digit divides the other exactly using proper parentheses
    if ((last != 0 && first % last == 0) || (first != 0 && last % first == 0))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}