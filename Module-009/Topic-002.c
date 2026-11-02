/*
  Function with Return Type and Parameters in C
  
  Description: A user-defined function that accepts two integer parameters (num1 and num2), 
               calculates their sum, and returns the resulting integer value back to the main function.
*/

#include <stdio.h>

int sum(int num1, int num2){
    int ans = num1 + num2;
    return ans;
}

int main()
{
     int a,b;
     scanf("%d %d", &a, &b);
     int val = sum(a,b);
     printf("%d", val);
    return 0;
}