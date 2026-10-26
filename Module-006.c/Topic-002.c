/*
  Topic: String Initialization & The Importance of the Null Terminator (`\0`)
  Description: Understanding how C recognizes the end of a string using the null 
               character (`\0`) and what happens when it is missing.

  --- DETAILED RECAP NOTES ---
  1. What is the Null Terminator (`\0`)?
     - In C, strings are not a built-in data type; they are just character arrays.
     - C needs a "stop sign" to know where a string ends. That stop sign is the 
       **Null Character (`\0`)**, which has an ASCII value of `0`.
     - When you write a string literal like `"Rido"`, the C compiler automatically 
       adds `\0` at the very end behind the scenes.

  2. Size Calculation:
     - `"Rido"` has 4 visible letters (`R`, `i`, `d`, `o`), but because of the hidden 
       `\0`, it actually takes up **5 memory blocks**. 
     - That is why `char a[5] = "Rido";` is completely safe and correct.

  3. What happens WITHOUT a Null Terminator?
     - If you create an array without space for `\0` (or initialize it character by 
       character without putting `\0` at the end), the array is just a normal 
       collection of characters, **not a valid string**.
     - When you pass it to `printf("%s", a);`, `printf` keeps printing characters 
       from memory continuously until it accidentally runs into a random `\0` 
       somewhere else in RAM. This causes **Undefined Behavior** (printing weird 
       symbols, garbage data, or crashing).
*/

#include <stdio.h>

int main()
{
    // --- SCENARIO 1: WITH NULL TERMINATOR (CORRECT) ---
    // Size is 5, which perfectly fits 'R', 'i', 'd', 'o', and the hidden '\0'
    char a[5] = "Rido";
    printf("Scenario 1 (Proper String): %s\n", a);


    // --- SCENARIO 2: WITHOUT NULL TERMINATOR (DANGEROUS) ---
    // Here, we create a 4-element array character by character WITHOUT '\0'
    char b[4] = {'R', 'i', 'd', 'o'};
    
    // printf("%s" expects a null-terminated string. Since 'b' has no '\0',
    // printf will print 'R', 'i', 'd', 'o' and then keep reading adjacent memory 
    // garbage until it finds a zero byte.
    printf("Scenario 2 (Missing Null): %s\n", b);

    return 0;
}