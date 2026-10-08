/*
  Problem Name: N Times
  Time Limit: 1.0 Second
  Memory Limit: 2.93 MB

  Statement:
  Given a positive integer N, print "I Love Practice" N times on new lines.

  Constraints:
  1 <= N <= 1000

  Input Format:
  A single positive integer N.

  Output Format:
  Print "I Love Practice" N times with a newline after each sentence.

  Sample Input 1:
  5
  Sample Output 1:
  I Love Practice
  I Love Practice
  I Love Practice
  I Love Practice
  I Love Practice
*/

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    // Loop runs from 1 to N (N iterations)
    for (int i = 1; i <= N; i++)
    {
        printf("I Love Practice\n");
    }

    return 0;
}