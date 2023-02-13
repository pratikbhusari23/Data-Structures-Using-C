// Count Zero

#include<stdio.h>

int countzero(int num){

    int count=0;

    while(num!=0){
        int rem=num%10;
        num=num/10;
        if(rem==0){
            count++;
        }
        
    }
    return count;
}

void main(){

    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if (num==0){
        printf("Number of zeros in %d is 1",num);
        return;
    }
    int ret=countzero(num);
    printf("Number of zeros in %d is %d",num,ret);
}