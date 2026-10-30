/*
  Problem Statement
  You will be given a string S. The string will contain small and capital English alphabets and digits only. You need to tell how many of them are capital alphabets, how many are small alphabets and how many are digits.
  
  Input Format
  - First line will contain T, the number of test cases.
  - Each test case will contain only S.
  
  Constraints
  1. 1 <= T <= 1000
  2. 1 <= |S| <= 10000; Here |S| means the length of S.
  
  Output Format
  - Output the count of capital alphabets first, then the count of small alphabets then the count of digits. Don't forget to put a new line after each test case.
  
  Sample Input 0
  2
  theFox25IsBrave
  ILoveYou100TimesAndSay2Also
  
  Sample Output 0
  3 10 27 
  16 4 3
*/

#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char s[10001];
        scanf("%s", s);

        int cap = 0;
        int sma = 0;
        int dig = 0;
        int sz = strlen(s);
        for (int i = 0; i < sz; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                cap++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                sma++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                dig++;
            }
        }
        printf("%d %d %d\n", cap, sma, dig);
    }
    return 0;
}