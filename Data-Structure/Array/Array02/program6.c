// Transpose of a matrix

#include <stdio.h>

int transposeofmatrix(int arr[][3], int row, int col, int arr2[][3]){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            arr2[j][i] = arr[i][j];
        }
    }
}

void main(){

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int row = 3;
    int col = 3;

    int arr2[row][col];

    transposeofmatrix(arr, row, col, arr2);

    for (int i = 0; i < row; i++){
        printf("[");
        for (int j = 0; j < col - 1; j++){
            printf("%d,", arr2[i][j]);
        }
        printf("%d]", arr2[i][col - 1]);
    }
}