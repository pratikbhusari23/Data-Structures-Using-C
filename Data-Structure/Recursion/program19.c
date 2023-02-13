#include<stdio.h>


int sumofArray(int arr[],int n){

    if(n==0){
        return 0;
    }

    return sumofArray(arr,n-1) + arr[n-1];
}
void main(){

    int arr[]={1,2,3,4,5};
    int ret=sumofArray(arr,5);

    printf("%d\n",ret);
    
}