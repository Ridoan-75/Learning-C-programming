/*
  Problem Name: B. Print (Corrected Version)
  Time Limit: 1 second
  Memory Limit: 64 megabytes
  
  Problem Description:
  Given a number N. Print all numbers from 1 to N.
  Note: Solve this problem using function.
  
  Input:
  Only one line contains a number N (1 <= N <= 10^3).
  
  Output:
  Print numbers from 1 to N separated by a single space.
  
  Note:
  Don't use any leading or trailing spaces.
  
  Sample Input:
  5
  
  Sample Output:
  1 2 3 4 5
*/

#include<stdio.h>

void print(int a){
    for(int i = 1; i < a; i++)
    {
        printf("%d ", i);
    }
    printf("%d", a);
}

int main()
{
    int a;
    scanf("%d", &a);
    print(a);

    return 0;
}