// #include<stdio.h>

// int fun(int num){

//     if(num<=1){
//         return 1;
//     }
//     int x=fun(num-1);
//     int y=fun(num-2);
//     printf("%d\n",x);
//     printf("%d\n",y);
   
// }

// void main(){

//     fun(4);
// }

#include <stdio.h>

int fun(int n){
    if(n>100)
        return n-10;
    return fun(fun(n+11));
    
}

int main(){
    int r;    
    r=fun(95);
    printf("%d\n",r);
    return 0;
    
}