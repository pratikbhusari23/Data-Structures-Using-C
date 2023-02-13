// count step /Not Solved yet i-- , i=i-1;

#include<stdio.h>

void main(){

    int num=0,step=0;

    printf("Enter number");
    scanf("%d",&num);

    for (int i=num ; i>=0 ; ){
        if(i%2==0){
            i=i/2;
            step++;
        }
        else{
            i--;
            step++;
        }
    }
    printf("Step=%d",step);
}