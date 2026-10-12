/*
  Problem Name: C. Even, Odd, Positive and Negative
  Platform: Codeforces / Practice Set
  Time Limit: 1.0 Second
  Memory Limit: 256 MB

  Statement:
  Given N numbers, count how many of these values are even, odd, positive, and negative.

  Input Format:
  First line contains N. Second line contains N numbers.

  Output Format:
  Print counts of Even, Odd, Positive, and Negative numbers on four separate lines.
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x;
    int even = 0;
    int odd = 0;
    int pos = 0;
    int neg = 0;

    // Loop to process all N numbers
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);

        // Check for Even or Odd
        if (x % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        // Check for Positive or Negative (0 is neither positive nor negative)
        if (x > 0)
        {
            pos++;
        }
        else if (x < 0)
        {
            neg++;
        }
    }

    // Print the final counts in the specified format
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);

    return 0;
}