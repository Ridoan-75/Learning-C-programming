/*
  Problem Name: D. Ali Baba and Puzzles
  Platform: Codeforces / Practice Set
  Time Limit: 1.0 Second
  Memory Limit: 256 MB

  Statement:
  Check whether you can get the fourth number (d) using arithmetic operators 
  (+, -, *) between the other three numbers (a, b, c) so that each operator 
  is used only once (two operators total).

  Constraints:
  -10^9 <= a, b, c <= 10^9
  -10^18 <= d <= 10^18

  Input Format:
  Only one line containing four numbers a, b, c, and d.

  Output Format:
  Print "YES" if possible, otherwise print "NO".
*/

#include <stdio.h>

int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    // Check all possible 6 combinations of operators (+, -, *)
    if (a + b - c == d || 
        a + b * c == d || 
        a - b + c == d || 
        a - b * c == d || 
        a * b + c == d || 
        a * b - c == d)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}