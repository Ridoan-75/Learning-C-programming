/*
  Problem Name: T. Sort Numbers
  Time Limit: 0.25 seconds
  Memory Limit: 256 megabytes
  
  Problem Description:
  Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.
  
  Input:
  Only one line containing three numbers A, B, C (-10^6 <= A, B, C <= 10^6)
  
  Output:
  Print the values in ascending order followed by a blank line and then the values in the sequence as they were read.
  
  Sample Input:
  3 -2 1
  
  Sample Output:
  -2
  1
  3

  3
  -2
  1
*/

#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    // Finding the correct ascending order using conditional checks
    if(a <= b && a <= c){
        printf("%d\n", a);
        if(b <= c){
            printf("%d\n%d\n", b, c);
        }else{
            printf("%d\n%d\n", c, b);
        }
    }else if(b <= a && b <= c){
        printf("%d\n", b);
        if(a <= c){
            printf("%d\n%d\n", a, c);
        }else{
            printf("%d\n%d\n", c, a);
        }
    }else if(c <= a && c <= b){
        printf("%d\n", c);
        if(a <= b){ // Fixed logic bug here: compared a and b instead of c and a
            printf("%d\n%d\n", a, b);
        }else{
            printf("%d\n%d\n", b, a);
        }
    }
    
    // Printing a blank line followed by original inputs in their original sequence
    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}