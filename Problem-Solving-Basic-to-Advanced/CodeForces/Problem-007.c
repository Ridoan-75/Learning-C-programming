/*
  Problem Name: B. Even Numbers
  Platform: Codeforces / Practice Set
  Time Limit: 1.0 Second
  Memory Limit: 256 MB

  Statement:
  Given a number N. Print all even numbers between 1 and N inclusive 
  in separate lines. If there are no even numbers, print -1.

  Constraints:
  1 <= N <= 10^3

  Input Format:
  Only one line containing a number N.

  Output Format:
  Print even numbers each on a new line, or -1 if none exist.
*/

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    // If N is 1, there are no even numbers between 1 and 1
    if (N == 1)
    {
        printf("-1\n");
    }
    else
    {
        // Loop from 1 to N and print only even numbers
        for (int i = 1; i <= N; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}