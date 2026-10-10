/*
  Level 1 — Basic Logic
  Problem 7: Countdown

  Description:
  Take an integer N as input. Print numbers in reverse order from N down to 1.

  Example:
  Input: 5
  Output: 
  5
  4
  3
  2
  1

  Topics: for loop decrement (i--)
*/

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = N; i >= 1; i--) {
        printf("%d\n", i);
    }

    return 0;
}