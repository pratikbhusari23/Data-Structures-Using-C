#include<stdio.h>

int step=0;

// int countstep(int num){
//     if(num==0){
//         return step;
//     }
//     if(num%2==0){
//         num=num/2;
//         step++;
//         return countstep(num);
//     }
//     else{
//         num--;
//         step++;
//         return countstep(num);
//     }
// }

int countstep(int num){

    if(num==0){
        return step;
    }
    else if(num%2==0){
        num=num/2;
        step++;
        
    }

    else{
        num=num-1;
        step++;
        
    }
    return countstep(num);
}

void main(){

    int num;
    printf("Enter number");
    scanf("%d",&num);

    int ret=countstep(num);
    printf("Step=%d",ret);
}