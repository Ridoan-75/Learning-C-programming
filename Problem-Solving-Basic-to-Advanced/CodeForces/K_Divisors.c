/*
  Problem Name: K. Divisors
  Platform: Codeforces / Practice Set
  Time Limit: 1.0 Second
  Memory Limit: 256 MB

  Statement:
  Given a number N. Print all the divisors of N in ascending order.

  Constraints:
  1 <= N <= 10^4

  Input Format:
  Only one line containing a number N.

  Output Format:
  Print all positive divisors of N, one number per line.
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // Loop from 1 to N to find all divisors
    for (int i = 1; i <= n; i++)
    {
        // If n is perfectly divisible by i, then i is a divisor
        if (n % i == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}