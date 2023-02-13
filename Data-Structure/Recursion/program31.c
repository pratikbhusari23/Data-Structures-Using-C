// Reverse using Recursion

#include<stdio.h>

int Reverse(int num){
    static int rev=0;
    if(num==0){

        return rev;
    }

    int rem=num%10;
    rev=rev*10+rem;
    return Reverse(num/10);
}

void main(){

    int num;
    printf("Enter number");
    scanf("%d",&num);

    int ret=Reverse(num);
    printf("Reverse=%d",ret);
}

