/*
  Problem Name: Checking Diagonal Matrix (Primary Diagonal)
  
  Feedback on your code:
  - Outstanding logic! You used `<stdbool.h>` and a flag variable (`is_diagonal`), which is the professional way to solve it.
  - You correctly checked if it's a square matrix first (`r == c`).
  - You checked the condition for a diagonal matrix: whenever `i != j`, the element `a[i][j]` must be `0`. If it's not `0`, you correctly flagged it as false.
  
  One small fix in your print logic:
  - Inside the loop, when `a[i][j] != 0`, you printed "This is not a primary diagonal matrix" immediately and set `is_diagonal = false`. 
  - Because of this, if there are multiple non-zero elements, it might print the "not" message multiple times before the program ends. 
  - To make it cleaner, we can just change `is_diagonal = false` inside the loop (with a `break`), and print the final result *once* at the very end outside the loops!
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    // Input loop for the 2D array
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // A diagonal matrix must be a square matrix first
    if (r != c)
    {
        printf("This is not a primary diagonal matrix\n");
        return 0;
    }

    bool is_diagonal = true;

    // Check all elements of the square matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // For non-diagonal elements (where i != j), value must be 0
            if (i != j)
            {
                if (a[i][j] != 0)
                {
                    is_diagonal = false;
                    break; // Exit inner loop as soon as a non-zero element is found
                }
            }
        }
        if (!is_diagonal)
        {
            break; // Exit outer loop early
        }
    }

    // Print the final result once based on the flag
    if (is_diagonal)
    {
        printf("This is a primary diagonal matrix\n");
    }
    else
    {
        printf("This is not a primary diagonal matrix\n");
    }

    return 0;
}