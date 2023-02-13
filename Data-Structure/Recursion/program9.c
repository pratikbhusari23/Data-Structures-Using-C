#include<stdio.h>

void main(){

    int x=5;
    int fact=1;

    for(int i=x ; i>=1 ; i--){

        fact=fact*i;
    }
    printf("%d\n",fact);
}