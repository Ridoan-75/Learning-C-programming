/*
  String Copy with Built-in Function (`strcpy`)
  
  Description: Copying the contents of string b into string a using the built-in 
               `strcpy` function from the `<string.h>` library.
*/

#include <stdio.h>
#include<string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    strcpy(a, b);
    printf("%s %s", a, b);
}