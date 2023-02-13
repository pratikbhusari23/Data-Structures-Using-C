#include<stdio.h>

void fun(int x){

    printf("Hello\n");
    if(x!=1){
        fun(--x);
        printf("byee\n");
    }
}

void main(){

    fun(5);
}

/*

Hello
Hello
Hello
Hello
Hello
byee
byee
byee
byee

*/