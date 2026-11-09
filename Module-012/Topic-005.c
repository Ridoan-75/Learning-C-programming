/*
  Problem Name: Checking Row Matrix and Square Matrix
  
  Feedback on your code:
  - Outstanding logic! Your approach is completely correct and precise.
  - Row Matrix Check: Checking `if (r == 1)` is the exact mathematical condition for a row matrix.
  - Square Matrix Check: Checking `if (r == c)` correctly verifies if the number of rows equals columns.
  - (Note: Just fixed a small typo in your else print statement from "nto" to "not").
*/

#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    // Input loop for 2D array elements
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Checking row matrix (condition: row must be 1)
    if (r == 1)
    {
        printf("This is a row matrix\n");
    }
    else
    {
        printf("This is not a row matrix\n");
    }

    // Checking square matrix (condition: row and column must be equal)
    if (r == c)
    {
        printf("This is a square matrix\n");
    }
    else
    {
        printf("This is not a square matrix\n");
    }

    return 0;
}