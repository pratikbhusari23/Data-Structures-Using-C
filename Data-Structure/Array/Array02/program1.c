#include<stdio.h>

int columnsum(int arr[][3],int row,int col,int arr2[]){
    for(int i=0 ; i<col ; i++){
        int sum=0;
        for(int j=0 ; j<row ; j++){

            sum=sum+arr[j][i];
        }
        arr2[i]=sum;
    }
}
void main(){

    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    int row=3;
    int col=3;

    int arr2[row];

    columnsum(arr,row,col,arr2);

    printf("[");
    for(int i=0; i<row-1 ; i++){

        printf("%d,",arr2[i]);
    }
    printf("%d]",arr2[row-1]);

}