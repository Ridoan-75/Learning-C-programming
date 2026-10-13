/*
  Problem Name: Digits (Right to Left)
  Platform: Codeforces / Practice Set
  Time Limit: 1.0 Second
  Memory Limit: 256 MB

  Statement:
  Given a number N, print the digits of that number from right to left separated by space.

  Constraints:
  1 <= T <= 10
  0 <= N <= 10^9

  Input Format:
  First line contains T test cases. Next T lines contain a number N.

  Output Format:
  For each test case, print the digits separated by a space on a single line.
*/

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        long long int N;
        scanf("%lld", &N);

        // Using do-while loop to handle N = 0 correctly
        do
        {
            printf("%lld ", N % 10);
            N /= 10;
        } while (N != 0);

        printf("\n");
    }

    return 0;
}