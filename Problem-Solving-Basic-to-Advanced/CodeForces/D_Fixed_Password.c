/*
  Problem Name: D. Fixed Password
  Platform: Codeforces / Practice Set
  Time Limit: 1.0 Second
  Memory Limit: 256 MB

  Statement:
  Given multiple lines each containing a number X (password). Print "Wrong" 
  if incorrect. If correct (1999), print "Correct" and terminate the program.

  Constraints:
  10^3 <= X <= 10^4 - 1 (1000 to 9999)

  Input Format:
  Several passwords, each on a new line.

  Output Format:
  Print "Wrong" or "Correct" accordingly.
*/

#include <stdio.h>

int main()
{
    int pass;

    // Keep taking input until the end of file (EOF) or correct password
    while (scanf("%d", &pass) != EOF)
    {
        if (pass == 1999)
        {
            printf("Correct\n");
            break; // Terminate the loop once the correct password is entered
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}