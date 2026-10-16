/*
  Topic: Codeforces Problem Solving - A. Summation
  Description: Taking an array of size `n`, calculating the total sum of all 
               elements, and printing the absolute value of that sum.

  --- DETAILED RECAP NOTES ---
  1. Integer Overflow Prevention (Why `long long int`?):
     - Since $N$ can be up to $10^5$ and each element up to $10^9$, the maximum 
       possible sum can reach $10^{14}$. A standard 32-bit `int` can only hold up 
       to $\approx 2 \times 10^9$, which would cause an overflow. Therefore, 
       `long long int` is mandatory for the `sum` variable.

  2. Absolute Value of the Sum:
     - The problem asks for the absolute value of the *total sum*, meaning we 
       add all numbers first (taking negative numbers into account) and then 
       convert the final sum to positive if it is less than `0`.

  3. Conditional Sign Flip:
     - `if (sum < 0) { sum = sum * (-1); }` ensures that any negative total sum 
       is transformed into its positive absolute equivalent.
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    long long int sum = 0; // Using long long to prevent overflow
    
    for(int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    
    // Making the final sum absolute if it's negative
    if(sum < 0)
    {
        sum = sum * (-1);
    }
    
    printf("%lld\n", sum);
    
    return 0;
}