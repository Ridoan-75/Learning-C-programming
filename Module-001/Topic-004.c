#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", a);
    return 0;
}// Topic 004: Taking Input in C
// File: topic-004.c

#include <stdio.h>
#include <stdbool.h> // Header file required for bool

int main()
{
    int age;
    float temp;
    char letter;
    bool isStudent;
    int boolInput; // Helper to read 1 or 0 for boolean

    // 1. Taking int input
    printf("Enter an integer: ");
    scanf("%d", &age);

    // 2. Taking float input
    printf("Enter a float: ");
    scanf("%f", &temp);

    // 3. Taking char input (note space before %c to ignore previous newline/spaces)
    printf("Enter a character: ");
    scanf(" %c", &letter);

    // 4. Taking bool input (enter 1 for true, 0 for false)
    printf("Enter 1 (true) or 0 (false): ");
    scanf("%d", &boolInput);
    isStudent = boolInput;

    // Output all values
    printf("\n--- Entered Values ---\n");
    printf("Integer: %d\n", age);
    printf("Float: %.2f\n", temp);
    printf("Character: %c\n", letter);
    printf("Boolean: %d\n", isStudent);

    return 0;
}