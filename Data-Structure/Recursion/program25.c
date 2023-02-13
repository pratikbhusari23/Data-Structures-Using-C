#include<stdio.h>
#include <stdbool.h>

bool ispalindrome(char arr[],int start , int end){

    if(arr[start]!=arr[end]){
        return false;
    }
    if(start>=end){
        return true;
    }
    return ispalindrome(arr,start+1,end-1);

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
    bool ret=ispalindrome(arr,0,size-1);
    if(ret==true){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}