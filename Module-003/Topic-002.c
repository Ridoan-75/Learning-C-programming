/*
  Topic: Introduction to For Loop
  File: topic-002.c

  Description:
  Demonstrates basic 'for' loop syntax in C by printing a string 1000 times.

  Loop Mechanics:
  1. Initialization : int i = 1 (Starts counter at 1)
  2. Condition      : i <= 1000 (Runs as long as 'i' is less than or equal to 1000)
  3. Step         : i = i + 1 or i++ (Increments 'i' by 1 after each iteration)
*/

#include <stdio.h>

int main()
{
    // Loop runs exactly 1000 times (from i = 1 to i = 1000)
    for (int i = 1; i <= 1000; i++)
    {
        printf("I Love You\n");
    }

    return 0;
}