/*
  Problem Name: A. Print Recursion
  
  Problem Description:
  Given a number N, print "I love Recursion" N times using a recursive function.
  
  Input Format:
  - Only one line containing a number N (1 <= N <= 100).
  
  Constraints:
  1. 1 <= N <= 100
  
  Output Format:
  - Print "I love Recursion" N times, each on a new line.
  
  Sample Input:
  3
  
  Sample Output:
  I love Recursion
  I love Recursion
  I love Recursion
*/

#include <stdio.h>

void recursion(int n)
{
    // Base case: Stop when n reaches 0
    if (n == 0)
    {
        return;
    }
    
    printf("I love Recursion\n");
    
    // Recursive call decreasing n towards the base case (0)
    recursion(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    
    recursion(n);
    
    return 0;
}