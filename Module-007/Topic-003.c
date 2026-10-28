/*
  String Concatenation Without Built-in Function
  
  Description: Concatenating string b to the end of string a manually without using 
               built-in functions like strcat, by finding the lengths and appending 
               elements using a loop.
*/

#include <stdio.h>
#include<string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int len_a = strlen(a);
    int len_b = strlen(b);
    for(int i = 0; i<=len_b; i++){
        a[i+len_a] = b[i];
    }
    printf("%s %s", a, b);
}