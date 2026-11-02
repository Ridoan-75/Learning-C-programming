/*
  All 4 Types of Functions in C and Their Specific Use Cases
  
  Description: A complete reference program demonstrating all four function variations 
               with clear comments explaining when and why to use each specific type.
*/

#include <stdio.h>

/*
  TYPE 1: With Return Type + With Parameters
  WHEN TO USE: When you need to pass input data into the function, perform a 
               calculation or logic, and send the result back to the caller 
               so it can be used in further operations (Industry Standard).
*/
int calculateSum(int a, int b) {
    return a + b;
}

/*
  TYPE 2: With Return Type + No Parameters
  WHEN TO USE: When the function doesn't require any external input arguments 
               passed into it, but it still needs to fetch, read, or generate 
               a value and return it back.
*/
int readNumber() {
    int n;
    scanf("%d", &n);
    return n;
}

/*
  TYPE 3: No Return Type (void) + With Parameters
  WHEN TO USE: When you have data ready to pass into the function, but the 
               function's sole purpose is to perform an action (like printing, 
               displaying, or updating UI) without returning any result.
*/
void displaySum(int a, int b) {
    int ans = a + b;
    printf("Sum: %d\n", ans);
}

/*
  TYPE 4: No Return Type (void) + No Parameters
  WHEN TO USE: When the function performs a standalone, self-contained task 
               that requires neither external inputs nor returning outputs 
               (e.g., printing menus, welcome banners, or status messages).
*/
void printWelcomeBanner() {
    printf("=== Welcome to the Program ===\n");
}

int main() {
    // Testing Type 1
    int result1 = calculateSum(10, 20);
    printf("Type 1 Result: %d\n", result1);

    // Testing Type 2
    // int result2 = readNumber();

    // Testing Type 3
    displaySum(15, 25);

    // Testing Type 4
    printWelcomeBanner();

    return 0;
}