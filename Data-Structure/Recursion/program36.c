// strlen

#include<stdio.h>

int compare(char str1[],char str2[],int size){

    int i=0;
    while(i<size){
        if(str1[i]==str2[i]){
            i++;
        }
        else{
            printf("Strings are not equal");
            break;
        }
    }
    if(i==size){
        printf("Strings are equal");
    }
}

void main(){

    char size1,size2;

    printf("Enter the size of string1: ");
    scanf("%d",&size1);

    printf("Enter the size of string2: ");
    scanf("%d",&size2);

    char str1[size1],str2[size2];

    if(size1==size2){
        compare(str1,str2,size1);
    }
    else {
        printf("Strings are not equal");
    }
}
