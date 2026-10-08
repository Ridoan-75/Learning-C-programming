/*
  Topic: Loop Control - The 'break' Statement
  File: topic-005.c

  Description:
  Demonstrates how the 'break' statement forcefully terminates a loop before its 
  normal completion condition is met.

  Execution Flow:
  1. Loop is configured to run from i = 1 to 20.
  2. Numbers 1 through 15 are printed.
  3. When 'i' reaches 15, the condition (i == 15) evaluates to TRUE.
  4. 'break' executes immediately, terminating the loop, ignoring remaining iterations (16-20).
*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 20; i++)
    {
        printf("%d\n", i);

        // Terminate loop early when counter reaches 15
        if (i == 15)
        {
            break;
        }
    }

    return 0;
}