/*
  Topic: Introduction to While Loop
  File: topic-007.c

  Description:
  Demonstrates basic 'while' loop syntax in C by printing numbers from 1 to 10.

  Loop Structural Components:
  1. Initialization : int i = 1 (Declared outside/before the loop)
  2. Condition      : while (i <= 10) (Checked before executing the loop body)
  3. Update         : i++ (Increment operator inside the loop body)
*/

#include <stdio.h>

int main()
{
    int i = 1; // Initialization

    // Condition evaluation
    while (i <= 10)
    {
        printf("%d\n", i);
        i++; // Update counter
    }

    return 0;
}