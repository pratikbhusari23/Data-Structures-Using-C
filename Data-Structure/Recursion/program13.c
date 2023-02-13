#include<stdio.h>

int fun(int n){

    if(n<=1){
        return 1;

    }
    int x=fun(n-1);
    int y=fun(n-2);

    printf("%d\n",x);
    printf("%d\n",y);

}

void main(){

    fun(4);
}