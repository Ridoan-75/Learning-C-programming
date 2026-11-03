/*
  Problem Name: T. Shape2
  Time Limit: 1 second
  Memory Limit: 256 megabytes
  
  Problem Description:
  Given a number N. Print a pyramid that has N rows.
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
     *
    ***
   *****
  *******
*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < space; j++){
            printf(" ");
        }
        for(int j = 0; j < star; j++){
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }
    return 0;
}