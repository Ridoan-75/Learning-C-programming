/*
  Problem Name: A. Add
  Time Limit: 1 second
  Memory Limit: 64 megabytes
  
  Problem Description:
  Given two numbers X and Y, Print their summation.
  Note: Solve this problem using function.
  
  Input:
  Only one line contains two numbers X and Y (0 <= X, Y <= 10^5).
  
  Output:
  Print the summation value.
  
  Sample Input:
  5 2
  
  Sample Output:
  7
*/

#include<stdio.h>

int sum(int a, int b){
    int ans = a + b;
    return ans;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int val = sum(a, b);
    printf("%d", val);
    return 0;
}