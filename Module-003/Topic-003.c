/*
  Topic: Printing Loop Counter Variable inside For Loop
  File: topic-003.c

  Description:
  Demonstrates how to print the loop counter variable 'i' alongside a text string 
  during each iteration.

  Loop Execution Flow:
  Iteration 1 : i = 1  -> Output: 1. I Love You
  Iteration 2 : i = 2  -> Output: 2. I Love You
  ...
  Iteration 1000: i = 1000 -> Output: 1000. I Love You
*/

#include <stdio.h>

int main()
{
    // Printing numbers 1 to 1000 alongside text
    for (int i = 1; i <= 1000; i++)
    {
        printf("%d I Love You\n", i);
    }

    return 0;
}