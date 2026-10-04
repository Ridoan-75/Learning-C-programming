// Topic 003: Boolean in C
// File: topic-003.c

#include <stdio.h>
#include <stdbool.h> // Required header file to use 'bool', 'true', and 'false'

int main()
{
    bool isC programmingFun = true;  // Boolean variable set to true
    bool isFishFlying = false;        // Boolean variable set to false

    // Printing booleans (C outputs booleans as integers: 1 for true, 0 for false)
    printf("True value: %d\n", isC programmingFun); // Output: 1
    printf("False value: %d\n", isFishFlying);       // Output: 0

    return 0;
}