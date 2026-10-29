/*
  Frequency Array Part 1
  
  Description: Counting the occurrences of specific elements (0, 1, and 2) in an array 
               using a frequency array (`fre`) of size 10 initialized to zero, and printing 
               their respective counts.
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
        if(a[i]==0){
            fre[0]++;
        }else if(a[i]==1){
            fre[1]++;
        }else if(a[i] == 2){
            fre[2]++;
        }
    }

    printf("%d -> %d\n",0, fre[0]);
    printf("%d -> %d\n",1, fre[1]);
    printf("%d -> %d\n",2, fre[2]);
}