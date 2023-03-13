/*

Q1. Count of elements using Recursion
Problem Description:
- Given an array A of N integers.
- Count the number of elements that have at least 1 element greater than
itself.
Example Input
Input 1:
A = [3, 1, 2]
Output:
2
Explanation:
- The elements that have at least 1 element greater than itself are 1 and 2
Input 2:
A = [5, 5, 3]
Output:
1
Explanation:
- The element that has at least 1 element greater than itself is 3.

using Recursion
*/
// using Recursion

#include<stdio.h>

int greaterthanitself(int arr[],int size,int i,int count){
    if(i==size){
        return count;
    }
    for(int j=0;j<size;j++){
        if(arr[i]<arr[j]){
            count++;
            break;
        }
    }
    return greaterthanitself(arr,size,i+1,count);
}

void main(){

    int size,i,j,count=0;


    printf("Enter the size of array: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements of array: ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("Count of elements: %d",greaterthanitself(arr,size,0,count));

}

