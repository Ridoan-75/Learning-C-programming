/*
  Level 1 — Basic Logic
  Problem 5: Multiplication Table

  Description:
  Take an integer N as input and print its multiplication table from 1 to 10.

  Example:
  Input: 5
  Output:
  5 x 1 = 5
  5 x 2 = 10
  5 x 3 = 15
  ...
  5 x 10 = 50

  Topics: for loop, arithmetic operations, formatting output
*/

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}