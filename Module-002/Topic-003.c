// Topic 003: Logical Operators
// File: topic-003.c

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 10;
    int b = 20;

    // 1. Logical AND (&&) - True if BOTH conditions are true
    bool andResult = (a < 15) && (b > 15); // True && True -> 1
    printf("(a < 15) && (b > 15) : %d\n", andResult);

    // 2. Logical OR (||) - True if AT LEAST ONE condition is true
    bool orResult = (a > 15) || (b > 15);  // False || True -> 1
    printf("(a > 15) || (b > 15) : %d\n", orResult);

    // 3. Logical NOT (!) - Reverses the logical state (True -> False, False -> True)
    bool notResult = !(a == b);             // !(False) -> 1
    printf("!(a == b)             : %d\n", notResult);

    return 0;
}