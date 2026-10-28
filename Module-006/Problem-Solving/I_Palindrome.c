/*
  I. Palindrome
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  
  Given a string S. Determine whether S is Palindrome or not
  Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.
  
  Input
  Only one line contains a string S (1 <= |S| <= 1000) where |S| is the length of the string and it consists of lowercase letters only.
  
  Output
  Print "YES" if the string is palindrome, otherwise print "NO".
  
  Examples
  InputCopy
  abba
  OutputCopy
  YES
  InputCopy
  icpcassiut
  OutputCopy
  NO
  InputCopy
  mam
  OutputCopy
  YES
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char c[1000006];
    scanf("%s", c);
    int len = strlen(c);
    int flag = 0;
    for(int i = 0, j = len -1; i<j; i++, j--){
        if(c[i] != c[j]){
            printf("NO");
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("YES");
    }
    return 0;
}