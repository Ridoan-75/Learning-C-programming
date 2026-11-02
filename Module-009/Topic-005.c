/*
  Function with No Return Value and No Parameters in C
  
  Description: A user-defined function with a `void` return type that takes 
               no parameters, reads inputs inside the function, performs 
               the calculation, and prints the result directly without returning anything.
*/

#include <stdio.h>

void sum(){
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = a+b;
    printf("%d", ans);
}

int main()
{
    sum();
    return 0;
}