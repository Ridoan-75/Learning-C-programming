/*
  Level 1 — Basic Logic
  Problem 3: Print Even Numbers

  Description:
  Print all even numbers from 1 to N.

  Example:
  Input: 10
  Output:
  2
  4
  6
  8
  10

  Topics: for loop, if-else, % operator
*/

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}