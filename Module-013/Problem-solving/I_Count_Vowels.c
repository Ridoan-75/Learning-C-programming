/*
Given a string S. Print number of vowels in the string.

Note:

Vowel letters: ['a', 'e', 'i', 'o', 'u'].
Vowel letters could be capital or small.
Solve this problem using recursion.
Input
Only one line containing a string S (1 ≤ |S| ≤ 200) where |S| is the length of the string and it consists only of capital ,small letters and spaces.

Output
Print number of vowels in string S.

Example
InputCopy
Data Structure Lab
OutputCopy
6


*/


#include <stdio.h>

int rec(char s[], int i)
{
    if (s[i] == '\0')
    {
        return 0;
    }
    int cnt = rec(s, i + 1);
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
        return cnt + 1;
    }else{
        return cnt;
    }
}

int main()
{
    char s[201];
    fgets(s, 201, stdin);
    int ans = rec(s, 0);
    printf("%d", ans);
    return 0;
}