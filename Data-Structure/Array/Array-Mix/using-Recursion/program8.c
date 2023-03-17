/*

Row sum using recursion
Problem Description :
- You are given a 2D integer matrix A, and return a 1D integer array containing
row-wise sums of the original matrix.
- Return an array containing row-wise sums of the original matrix.

Input 1:
[1,2,3,4]
[5,6,7,8]
[9,2,3,4]
Output 1:
[10,26,18]
Explanation :
Row 1 = 1+2+3+4 = 10
Row 2 = 5+6+7+8 = 26
Row 3 = 9+2+3+4 = 18

*/

#include <stdio.h>

int columnsum(int A[][4],int row,int col,int i,int j,int sum)
{
    if(j<col){
        sum = sum + A[i][j];
        return columnsum(A,row,col,i,j+1,sum);
    }
    else{
        return sum;
    }
}

int main()
{
    int A[3][4] = {{1,2,3,4},{5,6,7,8},{9,2,3,4}};
    int row = 3;
    int col = 4;
    int B[3] = {0};
    int i,j;
    for(i=0;i<row;i++)
    {
        B[i] = columnsum(A,row,col,i,0,0);
    }
    for(i=0;i<row;i++)
    {
        printf("%d\t",B[i]);
    }
    return 0;
}
