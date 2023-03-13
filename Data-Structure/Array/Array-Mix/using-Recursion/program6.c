/*

Given an Integer array of size of N. using recursion
Count the number of elements having at least 1 element greater than itself.
Input:
int arr[] = {2,5,1,4,8,0,8,1,3,8};
Output:
7

*/


#include <stdio.h>

int greater(int arr[],int size,int i,int count){
    if(i==size){
        return count;
    }
    for(int j=0;j<size;j++){
        if(arr[i]<arr[j]){
            count++;
            break;
        }
    }
    return greater(arr,size,i+1,count);
}

int main(){
    
    int arr[] = {2,5,1,4,8,0,8,1,3,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    printf("Count of elements having at least 1 element greater than itself is: %d",greater(arr,size,0,count));
    return 0;
}