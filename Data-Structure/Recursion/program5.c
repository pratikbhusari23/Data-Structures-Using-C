#include<stdio.h>

void fun(int num){

    printf("%d\n",num);

    if(num!=1){
        fun(--num);
    }
}

void main(){

    fun(5);
}