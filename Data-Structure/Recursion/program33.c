// more than 2 even number present in array using recursion

#include<stdio.h>
#include<stdbool.h>

int count=0;

bool Even(int arr[],int size){
    if(size==0){
        if(count>=2){
            return true;
        }
        else{
            return false;
        }
    }
    if(arr[size-1]%2==0){
        count++;
    }
    return Even(arr,size-1);
}

void main(){

    int size;
    printf("Enter size");
    scanf("%d",&size);
    int arr[size];
    for(int i=0 ; i<size ; i++){
        scanf("%d",&arr[i]);
    }

    bool ret=Even(arr,size);
    if(ret==true){
        printf("Yes");
    }
    else{
        printf("No");
    }
}