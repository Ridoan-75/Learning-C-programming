// Topic 004: If-Else Condition
// File: topic-004.c

#include <stdio.h>

int main()
{
    int money;
    
    printf("Enter your money: ");
    scanf("%d", &money);

    // If condition evaluates to true, the 'if' block executes
    if (money >= 100)
    {
        printf("Can eat burger!\n");
    }
    // Otherwise, the 'else' block executes
    else
    {
        printf("Cannot eat burger!\n");
    }

    return 0;
}