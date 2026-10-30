/*
  Problem Statement
  Suppose there are M1 farmers who can complete a work in D days. Fortunately, some other farmers appeard in the village before the start of the work, and now there are M2 additional farmers. Can you determine how many fewer days it will take for them to complete the task?
  Note: If the answer is a floating value, take the integer part of the answer.
  
  Input Format
  - First line will contain T, the number of test cases.
  - For each test case, input will contain three positive integers M1, M2 and D.
  
  Constraints
  1. 1 <= T <= 1000
  2. 1 <= M1 <= 1000
  3. 0 <= M2 <= 1000
  4. 1 <= D <= 100
  
  Output Format
  - Output how many fewer days it will take them to complete the work. Don't forget to put a new line after each test case.
  
  Sample Input 0
  4
  10 5 15
  4 0 5
  4 1 5
  7 1000 1
  
  Sample Output 0
  5
  0
  1
  0
  
  Explanation 0
  For the first test case - If 10 people can complete the work in 15 days, then 15 people can complete that work in 10 days which is 5 days less than the previous time. So the answer is 5.
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int sum = 0;
        sum = m1 + m2;

        int newD = 0;
        newD = (m1 * d) / sum;

        int answer = 0;
        answer = d - newD;
        printf("%d\n", answer);
    }

    return 0;
}