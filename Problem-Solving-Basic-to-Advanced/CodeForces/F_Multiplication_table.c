/*
  Problem Name: Multiplication Table
  Platform: Codeforces / Practice Set
  Time Limit: 1.0 Second
  Memory Limit: 256 MB

  Statement:
  Given a number N, print the multiplication table of the number from 1 to 12.

  Constraints:
  1 <= N <= 50

  Input Format:
  Only one line containing a number N.

  Output Format:
  Print 12 lines in the format: N * i = result
*/

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    // Loop from 1 to 12 to generate the multiplication table
    for (int i = 1; i <= 12; i++)
    {
        printf("%d * %d = %d\n", N, i, N * i);
    }

    return 0;
}