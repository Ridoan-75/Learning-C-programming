/*
  Problem Name: Pyramid Pattern (# and -)

  Problem Description:
  Given a positive integer N, print a symmetric pyramid pattern
  using '#' and '-' characters.

  The pattern contains 2*N - 1 lines.

  First half:
  - Spaces decrease by 1 in each line.
  - Characters increase by 2 in each line.
  - Even indexed rows print '#'.
  - Odd indexed rows print '-'.

  Second half:
  - Spaces increase by 1 in each line.
  - Characters decrease by 2 in each line.
  - Character alternation continues from the first half.

  Sample Input 0:
  4

  Sample Output 0:
     #
    ---
   #####
  -------
   #####
    ---
     #

  Sample Input 1:
  1

  Sample Output 1:
  #

  Constraints:
  1 <= N <= 100

  Solution:
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star = 1;
    int space = n - 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
            printf(" ");

        char ch = (i % 2 == 0) ? '#' : '-';

        for (int j = 0; j < star; j++)
            printf("%c", ch);

        printf("\n");

        star += 2;
        space--;
    }

    int star2 = 2 * n - 3;
    int space2 = 1;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < space2; j++)
            printf(" ");

        char ch = ((n + i) % 2 == 0) ? '#' : '-';

        for (int j = 0; j < star2; j++)
            printf("%c", ch);

        printf("\n");

        star2 -= 2;
        space2++;
    }

    return 0;
}