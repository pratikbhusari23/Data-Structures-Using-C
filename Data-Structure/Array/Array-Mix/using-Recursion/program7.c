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

#include <stdio.h>

int columnsum(int arr[][4],int i,int j,int size,int sum){
    if(i==size){
        return sum;
    }
    sum+=arr[i][j];
    return columnsum(arr,i+1,j,size,sum);
}

int main(){
    int arr[][4] = {{1,2,3,4},{5,6,7,8},{9,2,3,4}};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i=0;i<4;i++){
        printf("%d ",columnsum(arr,0,i,size,sum));
    }
    return 0;
}
