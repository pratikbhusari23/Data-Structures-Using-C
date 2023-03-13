/*

Given an Integer array of size of N.
Count the number of elements having at least 1 element greater than itself.
Input:
int arr[] = {2,5,1,4,8,0,8,1,3,8};
Output:
7

*/

#include <stdio.h>

int main(){
    
    int arr[] = {2,5,1,4,8,0,8,1,3,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]<arr[j]){
                count++;
                break;
            }
        }
    }
    printf("Count of elements having at least 1 element greater than itself is: %d",count);
    return 0;
}