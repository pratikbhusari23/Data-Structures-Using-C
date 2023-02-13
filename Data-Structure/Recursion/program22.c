#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool palindrome(char arr[],int size){


    for(int i=0 ; i<size ; ){
        if(arr[i]==arr[size-1]){
            i++;
            size--;
        }
        else{
            return false;
        }
    }
    return true;
}
    


int main(){

    int size;
    printf("Enter the size of array");
    scanf("%d",&size);
    char arr[size];
    printf("Enter the array elements : \n");
    for(int i=0 ; i<size ; i++){
        scanf(" %c",&arr[i]);
    }

    bool ret=palindrome(arr,size);
    if(ret==true){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }


    return 0;
    
}