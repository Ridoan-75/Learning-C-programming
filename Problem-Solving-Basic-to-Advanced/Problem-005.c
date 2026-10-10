/*
  Level 1 — Basic Logic
  Problem 6: Common Multiples

  Description:
  Print all numbers from 1 to N that are divisible by both 3 and 7.

  Example:
  Input: 100
  Output:
  21
  42
  63
  84

  Topics: for loop, if-else, logical AND (&&), modulus operator
*/

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0 && i % 7 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}