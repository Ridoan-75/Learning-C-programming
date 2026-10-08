/*
  Topic: Introduction to Do-While Loop
  File: topic-008.c

  Description:
  Demonstrates basic 'do-while' loop syntax in C by printing numbers from 1 to 10.

  Key Distinction (Exit-Controlled Loop):
  Unlike 'for' and 'while' loops, the 'do-while' loop checks its condition at the 
  END of the block. This guarantees that the loop body executes AT LEAST ONCE, 
  even if the initial condition is FALSE.

  Syntax Structure:
  1. Initialization : int i = 1
  2. Execution      : do { ... update; }
  3. Condition Check: while (condition);  <-- Note the required semicolon ';'
*/

#include <stdio.h>

int main()
{
    int i = 1; // Initialization

    do
    {
        printf("%d\n", i);
        i++; // Update counter
    } 
    while (i <= 10); // Condition check at the end (semicolon is mandatory)

    return 0;
}