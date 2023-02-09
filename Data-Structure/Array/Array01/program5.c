// Array Rotaion

#include <stdio.h>

int arrayRotationtoRight(int arr[],int size,int rotation){
    
    for(int i=0 ; i<rotation ; i++){
        
        int temp=arr[size-1];
        
        for(int j=size-1 ; j>0 ; j--){
            
            arr[j]=arr[j-1];
        }
        
        arr[0]=temp;
    }
}

void main(){
    
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    
    int size=sizeof(arr)/sizeof(arr[0]);
    
    int rotation=3;
    
    arrayRotationtoRight(arr,size,rotation);
    
    for(int i=0 ; i<size ; i++){
        
        printf("%d ",arr[i]);
    }
    
}