//reverse
#include<stdio.h>

void main(){

    int rem , num, rev=0;

    printf("Enter number");
    scanf("%d",&num);

    while(num!=0){
        rem=num%10;
        num=num/10;
        rev=rev*10+rem;
       
    }
    printf("Reverse=%d",rev);
}