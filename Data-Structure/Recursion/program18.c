#include<stdio.h>

int sumofArray(int arr[],int size){

    int sum=0;

    for(int i=0; i<size ; i++){

        sum=sum+arr[i];
    }
    return sum;
}
void main(){

    int x;

    printf("Enter Size of array");
    scanf("%d",&x);

    int arr[x];

    printf("Enter Array Elements\n");
    for(int i=0;i<x ; i++){

        scanf("%d",&arr[i]);
    }

    int ret=sumofArray(arr,x);
    printf("Sum=%d",ret);


}