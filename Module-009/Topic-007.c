/*
  Useful Math Functions in C (ceil, floor, round, sqrt, pow, abs)
  
  Description: Demonstrating standard mathematical library functions in C for floating-point 
               rounding, powers, square roots, and integer absolute values using <math.h> and <stdlib.h>.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // 1. ceil(): Rounds up to the nearest greater integer
    double val1 = 4.3;
    printf("ceil(%.1f) = %.1f\n", val1, ceil(val1));

    // 2. floor(): Rounds down to the nearest smaller integer
    double val2 = 4.7;
    printf("floor(%.1f) = %.1f\n", val2, floor(val2));

    // 3. round(): Rounds to the nearest integer
    double val3 = 4.5;
    printf("round(%.1f) = %.1f\n", val3, round(val3));

    // 4. sqrt(): Calculates the square root
    double val4 = 25.0;
    printf("sqrt(%.1f) = %.1f\n", val4, sqrt(val4));

    // 5. pow(): Calculates power (base^exponent)
    double base = 2.0, exp = 3.0;
    printf("pow(%.1f, %.1f) = %.1f\n", base, exp, pow(base, exp));

    // 6. abs(): Returns the absolute value of an integer
    int val5 = -15;
    printf("abs(%d) = %d\n", val5, abs(val5));

    return 0;
}