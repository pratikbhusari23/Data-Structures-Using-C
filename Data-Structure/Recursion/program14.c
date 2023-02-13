#include<stdio.h>

int fun(int num){

    printf("%d\n",num);
    if(num<=1){
        return 1;
    }
    return fun(num-1) + fun(num-2);

}

void main(){

    fun(3);
}