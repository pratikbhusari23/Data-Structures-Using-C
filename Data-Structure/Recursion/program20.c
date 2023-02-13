// Recursion in Characer Array

#include<stdio.h>

int search(char arr[],int size,char ch){

    for(int i=0;i<size;i++){

        if(arr[i]==ch){
            return i;
        }
        else{
            return -1;
        }
    }
}
void main(){

    char arr[]={'a','b','c','d','e'};
    char ch;
    printf("Enter the character to be searched");
    scanf("%c",&ch);
    int ret=search(arr,5,ch);
    printf("%d",ret);

    
}