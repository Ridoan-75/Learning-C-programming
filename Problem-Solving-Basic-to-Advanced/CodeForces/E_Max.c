/*
  Problem Name: Maximum Number
  Platform: Codeforces / Practice Set
  Time Limit: 1.0 Second
  Memory Limit: 256 MB

  Statement:
  Given a number N, and N numbers, find the maximum number among them.

  Constraints:
  1 <= N <= 10^3
  0 <= Xi <= 10^9

  Input Format:
  First line contains N. Second line contains N numbers.

  Output Format:
  Print the maximum number.
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long int max = 0; // Use long long for large numbers

    for (int i = 1; i <= n; i++)
    {
        long long int val;
        scanf("%lld", &val);

        if (val > max)
        {
            max = val;
        }
    }

    printf("%lld\n", max);

    return 0;
}