/*
  Problem Name: N. Shift Zeros
  Time Limit: 1 second
  Memory Limit: 256 megabytes
  
  Problem Description:
  Given an array A of size N. Print the array elements after shifting all zeroes in array A to the right.
  Note: Solve this problem using function.
  
  Input:
  First line will contain a number N (1 <= N <= 10^3) number of elements.
  Second line will contain N numbers (0 <= Ai <= 10^3).
  
  Output:
  Print the array after shifting right all its zeros.
  
  Sample Input:
  4
  2 0 0 5
  
  Sample Output:
  2 5 0 0 
*/

#include<stdio.h>

void shift(int a[], int n){
    for(int i = 0; i < n; i++){
        if(a[i] != 0){
            printf("%d ", a[i]);
        }
    }

    for(int i = 0; i < n; i++){
        if(a[i] == 0){
            printf("%d ", a[i]);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    shift(a, n);
    return 0;
}