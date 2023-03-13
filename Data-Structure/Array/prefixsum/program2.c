/*

Q2 Equilibrium index of the array
- You are given an array A of integers of size N.
- Your task is to find the equilibrium index of the given array
- The equilibrium index of an array is an index such that the sum of
elements at lower indexes are equal to the sum of elements at higher indexes.
- If there are no elements that are at lower indexes or at higher indexes,
then the corresponding sum of elements is considered as 0.
Note:
Array indexing starts from 0.
If there is no equilibrium index then return -1.
If there is more than one equilibrium index then return the minimum index.
Problem Constraints
1 <= N <= 105
-105 <= A[i] <= 105
Input 1:
A = [-7, 1, 5, 2, -4, 3, 0]
Output 1:
3
Explanation 1:
i Sum of elements at lower indexes Sum of elements at higher indexes
0 0 7
1 -7 6
2 -6 1
3 -1 -1
4 1 3
5 -3 0
6 0 0
- 3 is an equilibrium index, because:
A[0] + A[1] + A[2] = A[4] + A[5] + A[6]
Input 2:
A = [1, 2, 3]
Output 2:
-1
Explanation 2:
i Sum of elements at lower indexes Sum of elements at higher indexes
0 0 5
1 1 3
2 3 0
Thus, there is no such index.

*/


#include <stdio.h>

int equilibriumindex(int A[], int N){
    
    int Rightsum = 0;
    int leftsum = 0;

    
    for (int i = 1; i < N; i++)
    {
        A[i] = A[i] + A[i - 1];
    }


    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    for (int i = 1; i < N-1; i++)
    {
        Rightsum = A[N-1] - A[i];
        leftsum = A[i-1];
        if (Rightsum == leftsum)
        {
            printf("\n%d\n", i);
        }

    }
    return -1;
}

void main()
{

    int A[] = {-7, 1, 5, 2, -4, 3, 0};
    int N = 7;

    equilibriumindex(A, N);
}


    
    

