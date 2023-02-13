#include <stdio.h>

int searchArr(char arr[],int size,char ch){

    if(size==-1){

        printf("Character not found");
        return -1;
    }

    if(size!=-1){
        if(arr[size]==ch){
            return size;
        }
        
    }
    return searchArr(arr,size-1,ch);
    
}

int main(){

    char arr[5]={'A','B','C','D','E'};
    char ch;
    printf("Enter the character to be searched : ");
    scanf("%c",&ch);
    int ret=searchArr(arr,5,ch);
    if(ret!=-1)
        printf("Found at Index %d",ret);


    
}