/*
  Problem Name: Palindrome String Check
  
  Problem Description:
  You will be given a string, S, as input. Take this input in the main function. 
  Next, write a function named is_palindrome() that will receive this string. 
  Return type of that function will be integer. The function checks whether the string is a palindrome or not. 
  If it is a palindrome, return 1; otherwise, return 0. Receive this value in the main function 
  and, with the help of that value, print "Palindrome" or "Not Palindrome".
  
  Input Format:
  - Input will contain the string S.
  
  Constraints:
  1. 1 <= |S| <= 1000; Here |S| means the length of the string.
  
  Output Format:
  - Output "Palindrome" or "Not Palindrome" without the quotation marks.
  
  Sample Input 0:
  madam
  
  Sample Output 0:
  Palindrome
*/

#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{
    int len = strlen(s);
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char s[1001];
    scanf("%s", s);
    int result = is_palindrome(s);
    if (result == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}