/*
  Problem Name: Checking Zero Matrix / Null Matrix
  
  Feedback on your code:
  - Your thought process of counting total elements and comparing is really creative! 
  - However, in the current inner loop (`for(int j = 0; j<c; j++)`), `zero++` is just counting 
    how many times the loops run (which equals `r * c`), rather than checking if the matrix 
    elements (`a[i][j]`) are actually equal to `0`.
  - To check a Zero Matrix, we need to inspect every single element of the array. If even a 
    single element is NOT equal to 0, then it is not a zero matrix!
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

    // Flag to keep track if all elements are zero (assume true initially)
    int is_zero = 1; 

    // Traverse every element of the matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // If any element is NOT zero, it's not a zero matrix
            if (a[i][j] != 0)
            {
                is_zero = 0; // Set flag to false
                break;       // Exit inner loop early
            }
        }
        if (is_zero == 0)
        {
            break; // Exit outer loop early
        }
    }

    // Check the final flag status
    if (is_zero == 1)
    {
        printf("This is a zero matrix\n");
    }
    else
    {
        printf("This is not a zero matrix\n");
    }

    return 0;
}