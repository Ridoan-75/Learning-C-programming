/*
  Problem Name: C. Print from N to 1
  
  Problem Description:
  Given a number N, print all numbers from N to 1 separated by a single space using recursion.
  
  Input Format:
  - Only one line containing a number N (1 <= N <= 1000).
  
  Output Format:
  - Print from N to 1 separated by a single space (no extra trailing spaces at the end, though 
    standard CP judges usually accept a trailing space if it's printed right after the numbers).
  
  Feedback on your code:
  - Your logic is completely correct! Passing `n` and decreasing it with `n - 1` while stopping 
    at `n == 0` is the right approach for counting down.
*/


#include <stdio.h>

void recursion(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d", n);
    if (n > 1)
    {
        printf(" ");
    }

    recursion(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    recursion(n);
    return 0;
}