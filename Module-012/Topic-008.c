/*
  Problem Name: Checking Secondary Diagonal Matrix (Anti-Diagonal Matrix)
  
  Feedback on your code:
  - Brilliant! Your condition `if (i + j == r - 1)` for identifying the secondary (anti-) diagonal is 100% mathematically correct!
  - Just like the primary diagonal check, we can optimize the flag checking by using `break` 
    and printing the final result once at the end so it doesn't print multiple failure messages.
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

    // A secondary diagonal matrix must be a square matrix first
    if (r != c)
    {
        printf("This is not a secondary diagonal matrix\n");
        return 0;
    }

    bool is_secondary_diagonal = true;

    // Check all elements of the square matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // For secondary diagonal elements, the condition is i + j == r - 1
            // For all other positions (where i + j != r - 1), the value must be 0
            if (i + j != r - 1)
            {
                if (a[i][j] != 0)
                {
                    is_secondary_diagonal = false;
                    break; // Exit inner loop as soon as a non-zero element is found
                }
            }
        }
        if (!is_secondary_diagonal)
        {
            break; // Exit outer loop early
        }
    }

    // Print the final result once based on the flag
    if (is_secondary_diagonal)
    {
        printf("This is a secondary diagonal matrix\n");
    }
    else
    {
        printf("This is not a secondary diagonal matrix\n");
    }

    return 0;
}