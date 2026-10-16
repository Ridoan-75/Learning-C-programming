/*
  Topic: Codeforces Problem Solving - B. Searching (Linear Search)
  Description: Given an array of size `n` and a target number `x`, find the 
               first index where `x` appears. If not found, print `-1`.

  --- DETAILED RECAP NOTES ---
  1. Linear Search Strategy:
     - We check each element of the array one by one from left to right (`i = 0` to `n-1`) 
       to see if it matches our target `x`.

  2. Default / Sentinel Value (`idx = -1`):
     - We initialize `idx = -1` before searching. If `x` is never found in the array, 
       the loop ends without updating `idx`, allowing us to correctly print `-1`.

  3. First Occurrence & Optimization (`break`):
     - The problem specifies finding `x` the *first* time it appears. 
     - As soon as `a[i] == x` is true, we store the current index in `idx` and 
       immediately `break` out of the loop so we don't overwrite it with later occurrences.
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    int x;
    scanf("%d", &x);

    int idx = -1; // Default to -1 if element is not found

    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            idx = i;     // Store the index of the first match
            break;       // Stop searching immediately once found
        }
    }
    
    printf("%d", idx);
    
    return 0;
}