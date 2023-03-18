/*

Q10. Minor Diagonal Sum using Recursion
Problem Description :
- You are given a N X N integer matrix.
- You have to find the sum of all the minor diagonal elements of A.
- Minor diagonal of a M X M matrix A is a collection of elements
A[i, j] such that i + j = M + 1 (where i, j are 1-based).
- Return an integer denoting the sum of minor diagonal elements.
Input 1:
A = [[1, -2, -3],
[-4, 5, -6],
[-7, -8, 9]]
Output 1:
-5
Input 2:
A = [[3, 2],
[2, 3]]
Output 2:
4

Example Explanation :
Explanation 1:
A[1][3] + A[2][2] + A[3][1] = (-3) + 5 + (-7) = -5

Explanation 2:
A[1][2] + A[2][1] = 2 + 2 = 4
*/

#include <stdio.h>

int diagonalsum(int A[][3],int row,int col,int i,int j,int sum)
{
    if(i<row && j<col){
        if(i+j==row-1){
            sum = sum + A[i][j];
        }
        return diagonalsum(A,row,col,i+1,j+1,sum);
    }
    else{
        return sum;
    }
}

int main()
{
    int A[3][3] = {{1,-2,-3},{-4,5,-6},{-7,-8,9}};
    int row = 3;
    int col = 3;
    int sum = 0;
    sum = diagonalsum(A,row,col,0,0,0);
    printf("%d",sum);
    return 0;
}