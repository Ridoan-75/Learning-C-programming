/*
  G. Palindrome Array
  time limit per test: 1 second
  memory limit per test: 256 megabytes
  
  Given a number N and an array A of N numbers. Determine if it's palindrome or not.
  Note:
  An array is called palindrome if it reads the same backward and forward, for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.
  
  Input
  First line contains a number N (1 <= N <= 10^5) number of elements.
  Second line contains N numbers (1 <= A_i <= 10^9).
  
  Output
  Print "YES" (without quotes) if A is a palindrome array, otherwise, print "NO" (without quotes).
  
  Examples
  InputCopy
  5
  1 3 2 3 1
  OutputCopy
  YES
  
  InputCopy
  4
  1 2 3 4
  OutputCopy
  NO
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int flag = 0;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (a[i] != a[j])
        {
            printf("NO");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("YES");
    }

    return 0;
}