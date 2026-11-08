/*
Problem Name: B. Print from 1 to N
  
  Problem Description:
  Given a number N, print numbers from 1 to N in separate lines using recursion.
  
  Input Format:
  - Only one line containing a number N (1 <= N <= 1000).
  
  Constraints:
  1. 1 <= N <= 1000
  
  Output Format:
  - Print numbers from 1 to N, each on a separate line.
  
  Sample Input:
  5
  
  Sample Output:
  1
  2
  3
  4
  5
*/


#include<stdio.h>

void recursion(int i,int n)
{
    if(i>n){
        return;
    }
    printf("%d\n", i);
    recursion(i+1, n);
}

int main()
{
    int n;
    scanf("%d", &n);
    recursion(1, n);
    return 0;
}