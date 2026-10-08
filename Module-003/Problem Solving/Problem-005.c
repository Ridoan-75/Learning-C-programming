/*
  Problem Name: Divisible by 5 (1 to N)
  Time Limit: 1.0 Second
  Memory Limit: 2.93 MB

  Statement:
  Given a positive integer N, print numbers from 1 to N along with "Yes" 
  if the number is divisible by 5, and "No" otherwise.

  Constraints:
  1 <= N <= 1000

  Input Format:
  Input contains a single positive integer N.

  Output Format:
  Output each integer from 1 to N followed by "Yes" or "No" separated by space, 
  each on a new line.

  Sample Input 0:
  10

  Sample Output 0:
  1 No
  2 No
  3 No
  4 No
  5 Yes
  6 No
  7 No
  8 No
  9 No
  10 Yes
*/

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    // Loop from 1 to N
    for (int i = 1; i <= N; i++)
    {
        // Check divisibility by 5 using Modulus Operator (%)
        if (i % 5 == 0)
        {
            printf("%d Yes\n", i);
        }
        else
        {
            printf("%d No\n", i);
        }
    }

    return 0;
}