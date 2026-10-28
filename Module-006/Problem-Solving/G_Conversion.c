/*
  G. Conversion
  time limit per test: 2 seconds
  memory limit per test: 64 megabytes
  
  Given a string S. Print the origin string after replacing the following:
  - Replace every comma character ',' with a space character.
  - Replace every capital character in S with its respective small character and Vice Versa.
  
  Input
  Only one line contains a string S (1 <= |S| <= 10^5) where |S| is the length of the string and it consists of lower and upper English letters and comma character ','.
  
  Output
  Print the string after the conversion.
  
  Example
  InputCopy
  happy,NewYear,enjoy
  OutputCopy
  HAPPY nEWyEAR ENJOY
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100005];
    scanf("%s", s);
    int len = strlen(s);
    for(int i = 0; i<len; i++){
        if(s[i] == ','){
            s[i] = ' ';
        }else if(s[i]>='A' && s[i]<='Z'){
            s[i] = s[i] + 32;
        }else{
            s[i]-=32;
        }
    }
    printf("%s", s);
    return 0;
}