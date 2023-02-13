#include<stdio.h>

// int fun(int num){

//     static int sum;
//     if(num!=1){

//         sum=0;
//         sum=sum+num;
//         fun(--num);

//     }
//     printf("%d\n",sum);
// }

int fun(int num){

    static int sum=0;
    if(num==0){

        printf("%d\n",sum);
        return -1;
    }

    sum=sum+num;
    fun(--num);

}
void main(){

    fun(5);

}

/*

2
2
2
2
2
*/