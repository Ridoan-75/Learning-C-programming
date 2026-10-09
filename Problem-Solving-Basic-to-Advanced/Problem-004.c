/*
  Level 1 — Basic Logic
  Problem 4: Sum of Odd Numbers

  Description:
  Calculate the sum of all odd numbers from 1 to N.

  Example:
  Input: 7
  Calculation: 1 + 3 + 5 + 7 = 16
  Output: 16

  Topics: for loop, if-else, % operator, accumulator variable
*/

#include <stdio.h>

int main() {
    int sum = 0;
    int N;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0) {
            sum = sum + i;
        }
    }

    printf("%d\n", sum);

    return 0;
}