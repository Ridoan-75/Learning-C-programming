/*
  Problem Name: Variables
  Time Limit: 1.0 Second
  Memory Limit: 2.93 MB

  Statement:
  Take an integer A, a very big integer B, a floating value C, 
  and a character D as input, and output them serially line by line. 
  Output the floating value rounded to 2 decimal places.

  Constraints:
  -10^9 <= A <= 10^9
  -10^18 <= B <= 10^18
  -10^9 <= C <= 10^9

  Input Format:
  First line: A
  Second line: B
  Third line: C
  Fourth line: D

  Output Format:
  Output them serially with a newline after each value. 
  The float value must be printed with 2 decimal precision.

  Sample Input 1:
  100
  1234567891234567
  23.5675
  A

  Sample Output 1:
  100
  1234567891234567
  23.57
  A
*/

#include <stdio.h>

int main()
{
    int A;
    long long int B;
    float C;
    char D;

    // Read inputs sequentially across separate lines
    // Space before %c ensures newline/whitespace characters are skipped
    scanf("%d %lld %f %c", &A, &B, &C, &D);

    // Output formatted values
    printf("%d\n", A);
    printf("%lld\n", B);
    printf("%.2f\n", C); // Automatically rounds 23.5675 to 23.57
    printf("%c\n", D);

    return 0;
}