/*

Row to column zero
Problem Description :
- You are given a 2D integer matrix A, make all the elements in a row or
column zero if the A[i][j] = 0.
- Specifically, make the entire ith row and the jth column zero.
Problem Constraints :
1 <= A.size() <= 103
1 <= A[i].size() <= 103
0 <= A[i][j] <= 103
Input:
[1,2,3,4]
[5,6,7,0]
[9,2,0,4]
Output 1:
[1,2,0,0]
[0,0,0,0]
[0,0,0,0]


*/

#include <stdio.h>

int rowtocolumnzero(int A[][4], int row, int col)
{
    int rowarr[row];
    int colarr[col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (A[i][j] == 0)
            {
                rowarr[i] = 0;
                colarr[j] = 0;
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (rowarr[i] == 0 || colarr[j] == 0)
            {
                A[i][j] = 0;
            }
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

    int A[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 0}, {9, 2, 0, 4}};

    int row = 3;
    int col = 4;

    rowtocolumnzero(A, row, col);
}