/*
  Topic: Combining Loops with Conditional Logic
  File: topic-004.c

  Description:
  Demonstrates how to integrate 'if-else' statements inside a 'for' loop to classify 
  numbers from 1 to 20 as Even or Odd during each iteration.

  Logic Mechanics:
  1. Loop runs from i = 1 to 20.
  2. Modulus operator (i % 2 == 0) checks if the current number is divisible by 2.
  3. If true, prints "Even"; otherwise, prints "Odd".
*/

#include <stdio.h>

int main()
{
    // Iterate from 1 to 20
    for (int i = 1; i <= 20; i++)
    {
        // Check divisibility by 2
        if (i % 2 == 0)
        {
            printf("%d - even\n", i);
        }
        else
        {
            printf("%d - odd\n", i);
        }
    }

    return 0;
}