/*
  Problem Name: K. Max and Min
  Platform: Codeforces / Practice Set
  Time Limit: 0.25 Seconds
  Memory Limit: 64 MB

  Statement:
  Given 3 numbers A, B, and C, print the minimum number followed by a 
  single space, then print the maximum number.

  Constraints:
  -10^5 <= A, B, C <= 10^5

  Input Format:
  Only one line containing 3 numbers A, B, and C separated by space.

  Output Format:
  Print minimum followed by space and maximum (e.g., min max).
*/

#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    // Find and print the Minimum number
    if (A <= B && A <= C)
    {
        printf("%d ", A);
    }
    else if (B <= A && B <= C)
    {
        printf("%d ", B);
    }
    else if (C <= A && C <= B)
    {
        printf("%d ", C);
    }

    // Find and print the Maximum number
    if (A >= B && A >= C)
    {
        printf("%d\n", A);
    }
    else if (B >= A && B >= C)
    {
        printf("%d\n", B);
    }
    else if (C >= A && C >= B)
    {
        printf("%d\n", C);
    }

    return 0;
}