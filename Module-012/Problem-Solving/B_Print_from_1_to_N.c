/*B. Print from 1 to N
time limit per test1 second
memory limit per test64 megabytes
Given a number N. Print numbers from 1 to N in separate lines.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print N lines according to the required above.

Example
InputCopy
5
OutputCopy
1
2
3
4
5
*/



#include<stdio.h>

void num(int i, int n){
    if(i>n){
        return;
    }
    printf("%d\n", i);
    num(i+1, n);
}

int main()
{
    int n;
    scanf("%d", &n);
    num(1, n);
    return 0;
}