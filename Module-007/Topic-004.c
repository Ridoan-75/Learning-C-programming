/*
  String Concatenation with Built-in Function (`strcat`)
  
  Description: Concatenating string b to the end of string a using the built-in 
               `strcat` function from the `<string.h>` library.
*/

#include <stdio.h>
#include<string.h>
int main()
{
     char a[101], b[101];
     scanf("%s %s", &a, &b);
     strcat(a,b);
     printf("%s %s", a, b);
}