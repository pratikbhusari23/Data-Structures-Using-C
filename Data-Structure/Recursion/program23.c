#include<stdio.h>
#include <stdbool.h>

bool ispalindrome(char arr[],int size){

    int start=0;
    int end=size-1;
    while(start<end){
        if(arr[start]==arr[end]){
            start++;
            end--;
        }
        else{
            return false;
        }
    }
    return true;
}

void main(){

    int size;
    printf("Enter the size of array");
    scanf("%d",&size);
    char arr[size];
    printf("Enter the array elements : \n");
    for(int i=0 ; i<size ; i++){
        scanf(" %c",&arr[i]);
    }
    bool ret=ispalindrome(arr,size);
    if(ret==true){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}