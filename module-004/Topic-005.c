/*
  Topic: Array Declaration and Initialization
  Description: Exploring different ways to declare and initialize arrays in C, 
               including partial initialization and automatic size calculation.

  --- DETAILED RECAP NOTES ---
  1. Standard Declaration & Initialization:
     - `int ar[5] = {10, 20, 30, 40, 50};` explicitly defines the size and assigns values.
  
  2. Automatic Size Determination:
     - `int br[] = {100, 200, 300};` lets the compiler count the elements and set 
       the size automatically (size = 3).

  3. Partial Initialization:
     - `int cr[5] = {10, 20};` initializes the first two elements, and the remaining 
       unspecified elements are automatically set to `0` by the compiler.

  4. Zero Initialization:
     - `int dr[5] = {0};` sets all elements of the array to `0`.
*/

#include <stdio.h>

int main()
{
    // Method 1: Full declaration and initialization
    int ar[5] = {10, 20, 30, 40, 50};
    
    // Method 2: Automatic size determination based on initial values
    int br[] = {100, 200, 300};
    
    // Method 3: Partial initialization (remaining elements become 0)
    int cr[5] = {10, 20};
    
    // Method 4: Initializing all elements to zero
    int dr[5] = {0};

    // Printing elements to verify
    printf("ar elements: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");

    printf("br elements: ");
    for(int i = 0; i < 3; i++) {
        printf("%d ", br[i]);
    }
    printf("\n");

    printf("cr elements (partial): ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", cr[i]);
    }
    printf("\n");

    printf("dr elements (all zero): ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", dr[i]);
    }
    printf("\n");

    return 0;
}