#include<stdio.h>

int sum=0;

void sumN(int n){

    if(n>0){

        sum=sum+n;
        printf("%d\n",n);
        sumN(--n);
    }
    printf("%d\n",sum);
}
void main(){

    sumN(5);
}