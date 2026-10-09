/*
  Level 1 — Basic Logic
  Problem 1: Even or Odd
  
  Description:
  Take an integer N as input. Print "Even" if the number is even, and "Odd" if it is odd.
  
  Example:
  Input: 8
  Output: Even
  
  Topics: scanf, if-else, % operator
*/

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N % 2 == 0) {
        printf("Even");
    } else {
        printf("Odd");
    }

    return 0;
}