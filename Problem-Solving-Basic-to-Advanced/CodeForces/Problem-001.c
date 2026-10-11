/*
  Problem Name: I. Welcome for you with Conditions
  Platform: Codeforces / Practice Set
  Time Limit: 1.0 Second
  Memory Limit: 64 MB

  Statement:
  Given two numbers A and B. Print "Yes" if A is greater than or equal to B. 
  Otherwise print "No".

  Constraints:
  0 <= A, B <= 100

  Input Format:
  Only one line containing two numbers A and B separated by space.

  Output Format:
  Print "Yes" or "No" according to the statement.

  Examples:
  Input:  10 9  --> Output: Yes
  Input:  5 5   --> Output: Yes
  Input:  5 7   --> Output: No
*/

#include <stdio.h>

int main()
{
    int A, B;

    // Read two space-separated integers
    scanf("%d %d", &A, &B);

    // Check if A is greater than or equal to B
    if (A >= B)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}