/*
  Problem Statement
  You will be given a string S as input. The string will contain only English small alphabets and will not contain any spaces. You need to tell how many time each alphabets from a to z appears. But if the count is zero, you don't need to prin that.
  
  Input Format
  - Input will contain only S.
  
  Constraints
  1. 1 <= |S| <= 10000; Here |S| means the length of S.
  
  Output Format
  - Ouput in the format show in the sample output.
  
  Sample Input 0
  thefoxisbrave
  Sample Output 0
  a - 1b - 1e - 2f - 1h - 1i - 1o - 1r - 1s - 1t - 1v - 1x - 1
  
  Sample Input 1
  dotheyloveme
  Sample Output 1
  d - 1e - 3h - 1l - 1m - 1o - 2t - 1v - 1y - 1
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    scanf("%s", s);
    int fre[26] = {0};
    int sz = strlen(s);
    for (int i = 0; i < sz; i++)
    {
        fre[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (fre[i] > 0)
        {
            printf("%c - %d\n", 'a' + i, fre[i]);
        }
    }
    return 0;
}