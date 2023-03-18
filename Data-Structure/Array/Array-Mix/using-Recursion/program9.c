/*

Q9: Main Diagonal sum using Recursion
Problem Description :
- You are given a N X N integer matrix.
- You have to find the sum of all the main diagonal elements of A.
- The main diagonal of a matrix A is a collection of elements A[i, j]
such that i = j.
- Return an integer denoting the sum of main diagonal elements.

Input 1:
3 3 1 -2 -3 -4 5 -6 -7 -8 9

Output 1:
15
Input 2:
2 2 3 2 2 3
Output 2:
6
Example Explanation :
Explanation 1:
A[1][1] + A[2][2] + A[3][3] = 1 + 5 + 9 = 15
Explanation 2:
A[1][1] + A[2][2] = 3 + 3 = 6

*/

#include <stdio.h>

int diagonalsum(int A[][3],int row,int col,int i,int j,int sum)
{
    if(i<row && j<col){
        if(i==j){
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