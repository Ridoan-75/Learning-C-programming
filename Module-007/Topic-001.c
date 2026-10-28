/*
  module 007
  topic 001
  string copy without built in function
  
  Description: Copying the contents of string b into string a manually without using 
               built-in string functions like strcpy, using a loop up to the length of b 
               (including the null terminator).
*/

#include <stdio.h>
#include<string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int length = strlen(b);
    for(int i = 0; i<=length; i++){
        a[i] = b[i];
    }
    printf("%s %s", a, b);
}