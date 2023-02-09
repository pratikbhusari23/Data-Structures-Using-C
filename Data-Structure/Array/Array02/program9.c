/*Add the matrices
Problem Description :
- You are given two matrices A & B of same size, you have to return
another matrix which is the sum of A and B.
 */

#include <stdio.h>

int addMatrices(int A[][3], int B[][3], int row, int col)
{
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            A[i][j] = A[i][j] + B[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        printf("[");
        for (int j = 0; j < col - 1; j++)
        {
            printf("%d,", A[i][j]);
        }
        printf("%d]", A[i][col - 1]);
    }
}

void main()
{

    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9,8,7}, {6,5,4}, {3,2,1}};

    int row = 3;
    int col = 3;

    addMatrices(A, B, row, col);
}