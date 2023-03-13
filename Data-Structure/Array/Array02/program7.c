//  Rotate matrix by 90 degree

#include <stdio.h>

int rotateby90withoutusingextraarray(int arr[][2], int row, int col){
    
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if (i < j){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }
    for (int i = 0; i < row; i++){
        for(int j=0 ; j<col/2 ; j++){
            int temp=arr[i][j];
            arr[i][j]=arr[i][col-1-j];
            arr[i][col-1-j]=temp;
        }
    }
}

void main() {

    int arr[2][2] = {{1, 2}, {3,4}};

    int row = 2;
    int col = 2;

    rotateby90withoutusingextraarray(arr, row, col);

    for (int i = 0; i < row; i++){
        printf("[");
        for (int j = 0; j < col - 1; j++){
            printf("%d,", arr[i][j]);
        }
        printf("%d]", arr[i][col - 1]);
    }
}

// 
1 2
3 4

3 1
4 2

