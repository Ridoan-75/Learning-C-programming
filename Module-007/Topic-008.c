/*
  Frequency Array Part 2
  
  Description: Counting the occurrences of each element in an array using an optimized 
               frequency array technique by using the array elements directly as indices 
               (`fre[a[i]]++`), and printing the frequency of values from 0 up to 5.
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

    int fre[10] = {0};

    for(int i = 0; i<n; i++){
       fre[a[i]]++;
    }
    
    for(int i = 0; i<6;i++){
        printf("%d -> %d\n", i, fre[i]);
    }
}