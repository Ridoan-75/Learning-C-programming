/*
  Problem Name: H. Sorting
  Time Limit: 1 second
  Memory Limit: 64 megabytes
  
  Problem Description:
  Given a number N and an array A of N numbers. Print the numbers after sorting them.
  Note:
  - Don't use built-in-functions.
  - Try to solve it with bubble sort algorithm or Selection Sort.
  
  Input:
  First line contains a number N (0 < N < 10^3) number of elements.
  Second line contains N numbers (-100 <= Ai <= 100).
  
  Output:
  Print the numbers after sorting them.
  
  Sample Input:
  3
  3 1 2
  
  Sample Output:
  1 2 3 
*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++){
            printf("%d ", a[i]);
    }
    return 0;
}