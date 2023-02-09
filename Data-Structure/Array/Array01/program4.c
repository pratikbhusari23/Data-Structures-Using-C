// reverse The Array

#include <stdio.h>

int ReverseArray(int arr1[],int arr2[],int size){
  
  for(int i=0 ; i<size ; i++){
    
    arr2[i]=arr1[size-1-i];
  }
}

void main(){
  
  int arr1[]={1,2,3,4,5,6,7,8,9,10};
  
  int size=sizeof(arr1)/sizeof(arr1[0]);
  int arr2[size];
  
  ReverseArray(arr1,arr2,size);
  
  for(int i=0 ; i<size ; i++){
    
    printf("%d ",arr2[i]);
  }
  
}