/*
  Topic: Loop Control - The 'continue' Statement
  File: topic-006.c

  Description:
  Demonstrates how the 'continue' statement skips the rest of the code inside 
  the loop body for the current iteration and moves directly to the next iteration.

  Execution Flow:
  1. Loop runs from i = 1 to 20.
  2. When i = 15, the condition (i == 15) becomes TRUE.
  3. 'continue' executes, skipping the printf() statement below it for i = 15.
  4. The loop updates (i++ -> i = 16) and continues normally.
  5. Output contains numbers 1 to 20 EXCEPT 15.
*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 20; i++)
    {
        // Skip printing when i is equal to 15
        if (i == 15)
        {
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}