#include <stdio.h>

// int count = 0;

// int countzero(int num){
//     if(num%10==0){
//         count++;
//     }
//     else if(num==0){
//         return count;
//     }
//     else {
//         num=num/10;
//         return countzero(num);
//     }
// }

int countzero(int num){
    if(num==0){
        return 0;
    }
    int rem=num%10;
    if(rem==0){
        return 1+countzero(num/10);
    }
    else{
        return countzero(num/10);
    }
}

void main(){

    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int ret=countzero(num);
    printf("Number of zeros in %d is %d",num,ret);
}