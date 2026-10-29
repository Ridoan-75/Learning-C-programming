/*
  String Compare with Built-In Function (`strcmp`)
  
  Description: Comparing two strings lexicographically using the built-in 
               `strcmp` function from `<string.h>` and printing the result 
               based on the return value.
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s",a, b);
    int val = strcmp(a,b);
    if(val<0){
        printf("A is smaller");
    }else if(val == 0){
        printf("Equal");
    }else if(val>0){
        printf("B is smaller");
    }
}