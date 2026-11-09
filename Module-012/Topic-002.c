/*
  Topic: 2D Array Input and Output in C
  
  Feedback on your code:
  - Excellent! Your code is 100% correct.
  - You correctly took the number of rows (r) and columns (c).
  - The nested loops for taking input:
      - Outer loop (i) controls the rows (0 to r-1).
      - Inner loop (j) controls the columns (0 to c-1).
  - The nested loops for printing output:
      - Prints each element `a[i][j]` followed by a space.
      - `printf("\n");` after the inner loop ends ensures each row starts on a new line, creating the matrix format.
*/

#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    
    int a[r][c];

    // Input loop: reading elements row by row
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Output loop: printing elements in matrix form
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n"); // Move to the next line after printing all columns of the current row
    }

    return 0;
}