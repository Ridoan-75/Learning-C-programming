/*
  Level 1 — Basic Logic
  Problem 9: Skip Multiples of 3

  Description:
  Print numbers from 1 to N, but skip numbers that are divisible by 3.

  Example:
  Input: 10
  Output: 
  1
  2
  4
  5
  7
  8
  10

  Topics: for loop, continue keyword, modulus operator (%)
*/

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0) {
            continue; 
        }
        printf("%d\n", i);
    }

    return 0;
}