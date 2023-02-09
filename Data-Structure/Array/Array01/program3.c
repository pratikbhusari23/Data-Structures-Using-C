/* Reverse in Range */

#include <stdio.h>

int reverserange(int arr[],int size , int B , int C){

    for(int i=B ; i<=C ; i++){

        for(int j=B ; j<=C ; j++){

                int temp=arr[i];

                arr[i]=arr[j];

                arr[j]=temp;

        }
    }
}

void main(){

    int arr[]={1,2,3,4,5,6,7,8,9,10};

    int size=sizeof(arr)/sizeof(arr[0]);

    int B=2;

    int C=5;

    reverserange(arr,size,B,C);

    for(int i=0 ; i<size ; i++){

        printf("%d ",arr[i]);
    }

}

