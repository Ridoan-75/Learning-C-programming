// Topic 006: Nested If-Else Condition
// File: topic-006.c

#include <stdio.h>

int main()
{
    int money;

    printf("Enter your money: ");
    scanf("%d", &money);

    // Outer condition
    if (money >= 100)
    {
        printf("Will eat Burger\n");

        // Inner condition (Nested inside the outer 'if')
        if (money >= 125)
        {
            printf("Will also drink Coke\n");
        }
        else
        {
            printf("No money for Coke\n");
        }
    }
    else if (money >= 50)
    {
        printf("Will eat Fuchka\n");
    }
    else
    {
        printf("Cannot eat anything\n");
    }

    return 0;
}