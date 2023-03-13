/*

Q1. In place prefix sum
- Given an array A of N integers.
- Construct the prefix sum of the array in the given array itself.
- Return an array of integers denoting the prefix sum of the given array.
Problem Constraints
1 <= N <= 105
1 <= A[i] <= 103
Input 1:
A = [1, 2, 3, 4, 5]
Output 1:
[1, 3, 6, 10, 15]
Explanation 1:
The prefix sum array of [1, 2, 3, 4, 5] is [1, 3, 6, 10, 15].
Input 2:
A = [4, 3, 2]
Output 2:
[4, 7, 9]
Explanation 2:
The prefix sum array of [4, 3, 2] is [4, 7, 9].


*/

#include <stdio.h>

int prefixsum(int A[], int N)
{
    for (int i = 1; i < N; i++)
    {
        A[i] = A[i] + A[i - 1];
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
}

void main()
{

    int A[] = {1, 2, 3, 4, 5};
    int N = 5;

    prefixsum(A, N);
}