/*
  Problem Name: J. Multiples
  Platform: Codeforces / Practice Set
  Time Limit: 1.0 Second
  Memory Limit: 256 MB

  Statement:
  Given two numbers A and B. Print "Multiples" if A is a multiple of B 
  or vice versa. Otherwise print "No Multiples".

  Constraints:
  1 <= A, B <= 10^6

  Input Format:
  Only one line containing two numbers A and B separated by space.

  Output Format:
  Print "Multiples" or "No Multiples".

  Examples:
  Input:  9 3   --> Output: Multiples
  Input:  6 24  --> Output: Multiples
  Input:  12 5  --> Output: No Multiples
*/

#include <stdio.h>

int main()
{
    int A, B;

    // Read two space-separated integers
    scanf("%d %d", &A, &B);

    // Check if A is a multiple of B (A % B == 0) OR B is a multiple of A (B % A == 0)
    if (A % B == 0 || B % A == 0)
    {
        printf("Multiples\n");
    }
    else
    {
        printf("No Multiples\n");
    }

    return 0;
}