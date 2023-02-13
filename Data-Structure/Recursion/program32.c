// more than 2 even number present in array

#include<stdio.h>

void main(){

    int size,count=0;
    printf("Enter size");
    scanf("%d",&size);
    int arr[size];
    for(int i=0 ; i<size ; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0 ; i<5 ; i++){
        if(arr[i]%2==0){
            count++;
        }

        if(count>=2){
            printf("Yes");
            return;
        }
    }
    printf("No");
}
