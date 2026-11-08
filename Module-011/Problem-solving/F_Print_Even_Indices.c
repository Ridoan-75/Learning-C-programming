/*
  Problem Name: F. Print Even Indices
  
  Problem Description:
  Given a number N and an array A of N numbers. Print the numbers in even indices in a reversed order.
  Note:
  - Assume array A is 0-based indexing.
  - Solve this problem using recursion.
  
  Input Format:
  - First line contains a number N (1 <= N <= 10^3) number of elements.
  - Second line contains N numbers (-10^9 <= Ai <= 10^9).
  
  Output Format:
  - Print numbers in even indices in a reversed order separated by spaces.
  
  Examples:
  Input:
  4
  1 4 2 7
  Output:
  2 1 
  
  Input:
  7
  1 5 8 2 3 9 11
  Output:
  11 3 8 1 
*/

#include <stdio.h>

void even(int a[], int i)
{
    // Base case: stop when index drops below 0
    if (i < 0)
    {
        return;
    }
    
    // Check if the current index is even
    if (i % 2 == 0)
    {
        printf("%d ", a[i]);
    }
    
    // Recursive call moving backwards from the end of the array
    even(a, i - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    // Start recursion from the last index (n - 1)
    even(a, n - 1);
    
    return 0;
}