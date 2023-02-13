// Check if array is sorted 

#include<stdio.h>

void main(){

    int arr[]={1,2,3,4};

    int size=sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",size);

    for(int i=0 ; i<size-1 ; i++){
        printf("%d",arr[i]);
        if(arr[i]>arr[i+1]){
            printf("Not Sorted");
            return;
        }

    }
    printf("Sorted");
}
