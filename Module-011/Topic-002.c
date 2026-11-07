/*
  Problem Name: Print from 1 to N Using Recursion
  
  Problem Description:
  Write a recursive function in C to print numbers from 1 up to a specified limit 
  using a recursive approach with a base case to terminate execution.
*/

#include <stdio.h>

void hello(int i){
    if(i == 6){
        return;
    }
    printf("%d\n", i);
    hello(i + 1);
}

int main()
{
    int i = 1;
    hello(i);
    return 0;
}