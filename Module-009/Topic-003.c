/*
  Function with Return Type and No Parameters in C
  
  Description: A user-defined function that takes no input parameters from main, 
               reads two integers internally from standard input, calculates their sum, 
               and returns the resulting integer value back to the main function.
*/

#include <stdio.h>

int sum(){
    int a,b;
    scanf("%d %d",&a,&b);
    int ans = a + b;
    return ans;
}

int main()
{
     int ans = sum();
     printf("%d", ans);
    return 0;
}