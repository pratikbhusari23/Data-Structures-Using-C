/*

 Column Sum using Recursion
Problem Description :
- You are given a 2D integer matrix A, and return a 1D integer array containing
column-wise sums of the original matrix.
- Return an array containing column-wise sums of the original matrix.
Input :
[1,2,3,4]
[5,6,7,8]
[9,2,3,4]
Output :
{15,10,13,16}
Example Explanation
Column 1 = 1+5+9 = 15
Column 2 = 2+6+2 = 10
Column 3 = 3+7+3 = 13
Column 4 = 4+8+4 = 16
============================
*/

#include<stdio.h>

int columnsum(int arr[][100],int n,int m,int i,int j,int sum){
    if(i==n){
        return sum;
    }
    if(j==m){
        return sum;
    }
    sum = sum + arr[j][i];
    return columnsum(arr,n,m,i,j+1,sum);
}

void main(){

    int arr[100][100],row,column,i,j,sum=0;

    printf("Enter the size of array: ");
    scanf("%d %d",&row,&column);

    printf("Enter the elements of array: ");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<column;i++){
        sum = columnsum(arr,row,column,0,i,0);
        printf("%d ",sum);
        sum = 0;
    }

}