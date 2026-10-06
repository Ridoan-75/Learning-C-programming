/*
  Problem Name: Zero or Non Zero
  Time Limit: 1.0 Second
  Memory Limit: 2.93 MB

  Statement:
  In this problem you will be given an integer number N.
  Print "Zero" if the number is equal to 0, and "Non Zero" otherwise.

  Constraints:
  -1000 <= N <= 1000

  Input Format:
  The input consists of an integer N.

  Output Format:
  Print "Zero" if the number is equal to 0, and "Non Zero" otherwise.

  Sample Input 1:
  5
  Sample Output 1:
  Non Zero

  Sample Input 2:
  0
  Sample Output 2:
  Zero
*/

// ANSWER==>>

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("Zero");
    }
    else
    {
        printf("Non Zero");
    }
    return 0;
}