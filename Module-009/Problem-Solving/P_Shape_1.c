/*
  Problem Name: P. Shape1
  Time Limit: 1 second
  Memory Limit: 256 megabytes
  
  Problem Description:
  Given a number N. Print a face down right angled triangle that has N rows.
  For more clarification see the example below.
  
  Input:
  Only one line containing a number N (1 <= N <= 99).
  
  Output:
  Print the answer according to the required above.
  
  Note:
  Don't print any extra spaces after symbol "*".
  
  Sample Input:
  4
  
  Sample Output:
  ****
  ***
  **
  *
*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = n;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= star; j++){
            printf("*");
        }
        printf("\n");
        star--;
    }
    return 0;
}