/*
C. Print from N to 1
time limit per test1 second
memory limit per test64 megabytes
Given a number N. Print all numbers from N to 1 separated by a single space.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print from N to 1 separated by a single space.

Example
InputCopy
4
OutputCopy
4 3 2 1
Note
Make sure don't print any leading or trailing spaces.

*/



#include<stdio.h>

void recursion(int n){
    if(n==0){
        return;
    }
    printf("%d", n);
    if(n>1){
        printf(" ");
    }
    recursion(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    recursion(n);
    return 0;
}