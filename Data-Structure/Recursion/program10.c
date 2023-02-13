#include<stdio.h>

void fun(int x){

    static int fact=1;

    if(x!=1){

        fact=fact*x;
        fun(--x);
    }
    else 
        printf("%d",fact);
}

void main(){

    fun(5);

}