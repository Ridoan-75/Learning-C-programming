/*
  Star Pattern Using Nested Loops
  
  Description: Printing a right-angled triangle star pattern using nested loops 
               where the number of stars increases row by row based on a `star` variable.
*/

#include <stdio.h>
int main()
{
    int n;
    int star = 1;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=star; j++){
            printf("*");
        }
            printf("\n");
            star++;
    }

}