// Topic 05: If-Else Ladder
// File: topic-05.c

#include <stdio.h>

int main()
{
    int money;

    printf("Enter your money: ");
    scanf("%d", &money);

    // Checks conditions sequentially from top to bottom
    if (money >= 100)
    {
        printf("Will eat Burger\n");
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