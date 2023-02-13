// strlen using recursion

#include<stdio.h>
#include<stdbool.h>

bool compare(char str1[],char str2[],int size){

    if(size==0){
        return true;
    }
    if(str1[size-1]==str2[size-1]){
        return compare(str1,str2,size-1);
    }
    else{
        return false;
    }
}

void main(){

    int size1,size2;

    printf("Enter the size of string1: ");
    scanf("%d",&size1);

    printf("Enter the size of string2: ");
    scanf("%d",&size2);

    char str1[size1],str2[size2];

    printf("Enter string1: ");
    scanf("%s",str1);

    printf("Enter string2: ");
    scanf("%s",str2);
    
    if(size1==size2){
        
        int ret =compare(str1,str2,size1);

        if(ret==true){
            printf("Strings are equal");
        }
        else{
            printf("Strings are not equal");
        }
        
    }
    else {
        
        printf("Strings are not equal");
    }

    
}
