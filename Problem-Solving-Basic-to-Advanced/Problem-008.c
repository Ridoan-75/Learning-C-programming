/*
  Level 1 — Basic Logic
  Problem 8: Count Numbers Divisible by 5

  Description:
  Count how many numbers between 1 and N are divisible by 5.

  Example:
  Input: 20
  Output: 4

  Topics: for loop, if condition, modulus operator (%), counter variable
*/

#include<stdio.h>
int main()
{
    int count = 0;
    int N;
    scanf("%d", &N);
    for(int i =1; i <= N; i++)
    if(i%5==0)
    {

        count++;
    }
    printf("%d\n", count);
}