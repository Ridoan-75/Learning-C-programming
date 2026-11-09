/*
  Topic: Printing Specific Row and Column from a 2D Array
  
  Feedback on your code:
  - Conceptually, your logic for both specific row and specific column is completely correct!
  - For specific row: The row index stays fixed (`a[specific_row][i]`), and the loop runs `c` times (for all columns).
  - For specific column: The column index stays fixed (`a[i][cloumn]`), and the loop runs `r` times (for all rows).
  
  Important Note on Indexing (0-based vs 1-based):
  - In C programming, array indexing starts from 0 (0-based).
  - If the user asks for row 2, and they mean index 2, your code works directly.
  - If the user inputs 1-based row/column numbers (e.g., 1st row or 2nd column), you just need to subtract 1 (`specific_row - 1` or `column - 1`).
*/

#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    
    int a[r][c];

    // Read the 2D array elements
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // 1. Printing a specific row (e.g., row index provided by user)
    int req_row;
    scanf("%d", &req_row);
    
    // Loop iterates through all columns of that specific row
    for (int j = 0; j < c; j++)
    {
        printf("%d ", a[req_row][j]);
    }
    printf("\n");

    // 2. Printing a specific column (e.g., column index provided by user)
    int req_col;
    scanf("%d", &req_col);
    
    // Loop iterates through all rows of that specific column
    for (int i = 0; i < r; i++)
    {
        printf("%d ", a[i][req_col]);
    }
    printf("\n");

    return 0;
}