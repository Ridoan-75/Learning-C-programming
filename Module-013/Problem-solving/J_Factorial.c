/*
J. Factorial
time limit per test1 second
memory limit per test64 megabytes
Given a number N. Print factorial of N.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 20).

Output
Print the factorial of the number N.

Example
InputCopy
5
OutputCopy
120


*/


#include<stdio.h>

long long int rec(int n){
    if(n==1){
        return 1;
    }
    long long int mul = rec(n-1);
    return n*mul;
}

int main()
{
    int  n;
    scanf("%d", &n);
    long long int ans = rec(n);
    printf("%lld", ans);
    return 0;
}