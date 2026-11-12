/*
C. Choose Elements
time limit per test1 second
memory limit per test256 megabytes
You are given an array a
 of n
 integers, and an integer k

You can choose at most k
 elements and get their summation.

What is the maximum summation you can get?

Input
The first line contains two integers n
 and k(1≤k≤n≤103)
 the number of elements in the array a
 and the maximum elements you can choose respectively.

The second line contains n
 integers ai(−109≤ai≤109)
 the elements of the array a
.

Output
Output the maximum summation you can get.

Examples
InputCopy
2 2
1 2
OutputCopy
3
InputCopy
2 1
1 2
OutputCopy
2
InputCopy
3 3
1 2 3
OutputCopy
6
*/


#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    long long int sum = 0;
    for (int j = 0; j < k; j++)
    {
        int max = a[0];
        int index = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
                index = i;
            }
        }

        if(max <= 0){
            break;
        }
        sum += max;
        a[index] = 0;
    }
    printf("%lld\n", sum);

    return 0;
}