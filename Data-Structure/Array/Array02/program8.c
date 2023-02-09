/*Are Matrices the same?
Problem Description :
- You are given two matrices A & B of equal dimensions and you have to
check whether the two matrices are equal or not.
- Return 1 if both matrices are equal or return 0.
NOTE: Both matrices are equal if A[i][j] == B[i][j] for all i and j
in the given range.
 */

#include <stdio.h>

int areMatricesEqual(int A[][3], int B[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (A[i][j] != B[i][j])
            {
                return 0;
            }
        }
    }
    return 1;
}

void main()
{

    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int row = 3;
    int col = 3;

    printf("%d", areMatricesEqual(A, B, row, col));
}