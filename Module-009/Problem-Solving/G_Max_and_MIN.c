/*
  Problem Name: G. Max and MIN
  Time Limit: 1 second
  Memory Limit: 64 megabytes
  
  Problem Description:
  Given an array A of size N. Print the minimum and the maximum number in the array.
  Note: Solve this problem using function.
  
  Input:
  First line will contain a number N (1 <= N <= 10^3) number of elements.
  Second line will contain N numbers (0 <= Xi <= 10^5).
  
  Output:
  Print the minimum and the maximum number separated by a space.
  
  Sample Input:
  5
  10 13 95 1 3
  
  Sample Output:
  1 95
*/

#include<stdio.h>
#include<limits.h>

void max(int a[], int n){
     int min = __INT_MAX__;
     for(int i = 0; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }
     }

     int max = INT_MIN;
     for(int i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
     }
     printf("%d %d", min, max);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    max(a, n);

    return 0;
}