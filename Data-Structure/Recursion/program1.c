#include<stdio.h>

void fun(int x){
    printf("%d",x);
    fun(--x);
}
void main(){
    fun(5);
}
