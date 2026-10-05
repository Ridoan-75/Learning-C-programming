// Topic 002: Relational Operators
// File: topic-002.c

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 10;
    int b = 20;

    // Relational operators return 1 (true) or 0 (false)
    printf("a == b : %d\n", a == b); // Equal to (Is 10 equal to 20? -> 0)
    printf("a != b : %d\n", a != b); // Not equal to (Is 10 not equal to 20? -> 1)
    printf("a > b  : %d\n", a > b);  // Greater than (Is 10 greater than 20? -> 0)
    printf("a < b  : %d\n", a < b);  // Less than (Is 10 less than 20? -> 1)
    printf("a >= b : %d\n", a >= b); // Greater than or equal to (-> 0)
    printf("a <= b : %d\n", a <= b); // Less than or equal to (-> 1)

    return 0;
}