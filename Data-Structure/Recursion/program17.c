#include<stdio.h>

int fibo(int num){

    if(num<=1){

        if(num==1){
            return 1;
        }
        else {
            return 0;
        }
    }
    return fibo(num-1) + fibo(num-2);
}

void main(){

    int n;
    printf("Enter the index of Fibonnaci Number");
    scanf("%d",&n);
    printf("The fibonnaci number at index %d is %d",n,fibo(n));
}

// #include<stdio.h>

// void fibo(int n){

//     int a=0;
//     int b=1;

//     while(n){

//         printf("%d\n",a);
//         int c=a+b;
//         a=b;
//         b=c;
//         n--;
//     }

// }

// void main(){

//     fibo(5);
// }