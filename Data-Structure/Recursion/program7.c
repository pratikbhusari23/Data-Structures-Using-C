#include<stdio.h>

void fun(int x){

    printf("hello\n");
    if(x!=1){
        fun(--x);
    }
    printf("Bye\n");
}

void main(){

    fun(5);
}

/*

hello
hello
hello
hello
hello
Bye
Bye
Bye
Bye
Bye

*/