/*
  Level 1 — Basic Logic
  Problem 2: Find the Largest

  Description:
  Take three integers A, B, and C as input. Print the largest number among them.

  Example:
  Input: 12 45 30
  Output: 45

  Topics: if-else if, Logical AND (&&)
*/

#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (A >= B && A >= C) {
        printf("%d\n", A);
    } else if (B >= A && B >= C) {
        printf("%d\n", B);
    } else {
        printf("%d\n", C);
    }

    return 0;
}