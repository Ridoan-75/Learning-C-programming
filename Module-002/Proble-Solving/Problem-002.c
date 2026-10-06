/*
  Problem Name: 5 Marks for good hand writing
  Time Limit: 1.0 Second
  Memory Limit: 2.93 MB

  Statement:
  In this problem you will be given an integer number N.
  You will have to add 5 with N and print it.

  Constraints:
  1 <= N <= 100

  Input Format:
  Input consists of an integer number N.

  Output Format:
  Output the result after adding 5 with N.

  Sample Input 1:
  100
  Sample Output 1:
  105
*/

// ANSWER==>>

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d\n", n + 5);

    return 0;
}