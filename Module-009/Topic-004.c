/*
  Function with Parameters and No Return Value in C
  
  Description: A user-defined function with a `void` return type that accepts 
               two integer parameters, performs the calculation, and prints 
               the result directly from within the function without returning anything to main.
*/

#include <stdio.h>

void sum(int a, int b){
    int ans = a+b;
    printf("%d", ans);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a,b);
    return 0;
}