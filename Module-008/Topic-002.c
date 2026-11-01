/*
  Pyramid Pattern Using Nested Loops
  
  Description: Printing a symmetric pyramid pattern using nested loops 
               by managing leading spaces and an increasing number of stars 
               row by row based on the total number of rows `n`.
*/

#include <stdio.h>
int main()
{
    int n;
    
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= space; j++){
            printf(" ");
        }
        for(int j = 1; j <= star; j++){
            printf("*");
        }
            printf("\n");
            star += 2;
            space--;
    }

}