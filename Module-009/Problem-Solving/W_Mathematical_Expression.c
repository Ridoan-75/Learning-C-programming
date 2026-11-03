/*
  Problem Name: W. Mathematical Expression
  Time Limit: 0.25 seconds
  Memory Limit: 256 MB
  
  Problem Description:
  Given a mathematical expression. The expression will be one of the following expressions:
  A + B = C, A - B = C and A * B = C
  where A, B, C are three numbers, S is the sign between A and B, and Q the '=' sign
  Print "Yes" If the expression is Right , Otherwise print the right answer of the expression.
  
  Input:
  Only one line containing the expression: A, S, B, Q, C respectively (0 <= A, B <= 100, -10^5 <= C <= 10^5) and S can be ('+', '-', '*') without the quotation.
  
  Output:
  Output either "Yes" (without the quotation) or the right answer depending on the statement.
  
  Sample Input:
  5 + 10 = 15
  
  Sample Output:
  Yes
*/

#include<stdio.h>
int main()
{
    int a, b, c;
    char s, eq;
    scanf("%d %c %d %c %d", &a, &s, &b, &eq, &c);
    int ans;
    if(s=='+'){
        ans = a + b;
    }else if(s == '-'){
        ans = a-b;
    }else if(s == '*'){
        ans = a * b;
    }

    if(ans == c){
        printf("Yes");
    }else{
        printf("%d", ans);
    }
    return 0;
}