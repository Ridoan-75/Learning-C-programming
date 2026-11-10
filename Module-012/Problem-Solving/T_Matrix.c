/*
  Problem Name: T. Matrix
  
  Problem Description:
  Given a number N and a 2D array A of size N x N. Print the absolute difference 
  between the summation of its two diagonals (primary diagonal and secondary diagonal).
  
  Input Format:
  - First line contains a number N (1 <= N <= 100).
  - Each of the next N lines will contain N numbers (-100 <= Ai <= 100).
  
  Output Format:
  - Print the absolute difference between the summation of the matrix main diagonals.
  
  Example:
  Input:
  4
  1 5 12 1
  2 -4 6 7
  3 8 5 9
  3 5 23 -6
  
  Output:
  22
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int mat[n][n];

    // Input loop for N x N matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int pri = 0;
    int sec = 0;

    // Traverse the matrix to calculate diagonal sums
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Primary diagonal condition
            if (i == j)
            {
                pri = pri + mat[i][j];
            }
            
            // Secondary diagonal condition (independent 'if' so center element is counted in both if applicable)
            if (i + j == n - 1)
            {
                sec = sec + mat[i][j];
            }
        }
    }

    // Print the absolute difference between the two diagonal sums
    printf("%d\n", abs(pri - sec));

    return 0;
}