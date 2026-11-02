/*
  Selection Sort (Ascending and Descending Order Sorting)
  
  Description: Sorting an array of integers in descending order using nested loops and swapping elements 
               directly when a smaller element is encountered relative to the current position.
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){     
            if(a[i]<a[j]){         //if(a[i]>a[j]){ Ascending order
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i = 0; i<n; i++){
        printf("%d ", a[i]);
    }
}