/*
  Problem Name: S. Search In Matrix
  
  Problem Description:
  Given two numbers N and M, a 2D array of size N x M and a number X. 
  Determine whether X exists in the 2D array A or not.
  
  Input Format:
  - First line contains two numbers N, M (2 <= N, M <= 100) where N is rows and M is columns.
  - Each of the next N lines will contain M numbers (1 <= Ai <= 10^5).
  - Last line contains a number X (0 <= X <= 10^5).
  
  Output Format:
  - Print "will take number" if the number doesn't exist in the 2D array.
  - Otherwise, print "will not take number".
  
  Examples:
  Input:
  2 2
  1 2
  3 4
  3
  Output:
  will not take number

  Input:
  2 2
  1 2
  3 4
  10
  Output:
  will take number

  Feedback on your code:
  - Fantastic! Your logic for searching elements and tracking with a flag is completely correct.
  - One small optimization: As soon as you find the number (`a[i][j] == x`), you can use `break` (or return early) to stop checking the rest of the matrix, which saves execution time.
*/


#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int x;
    scanf("%d", &x);

    int flag = 1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == x)
            {
                flag = 0;
            }
        }
    }

    if (flag == 1)
    {
        printf("will take number");
    }else{
         printf("will not take number");
    }
    return 0;
}