// Good pair 

//i!=j && arr[i] + arr[j] == k

#include <stdio.h>

int goodpair(int arr[],int size , int B){

    int count=0;

    for(int i=0 ; i<size; i++){

        for(int j=0+i ; j<size ; j++){

            if(arr[i]+arr[j]==B && i!=j){

                count++;
            }
        }
    }
    return count;

}

void main(){

    int arr[]={1,2,3,4,5,6,7,8,9,10};

    int size=sizeof(arr)/sizeof(arr[0]);

    int B=10;

    printf("%d",goodpair(arr,size,B));

}