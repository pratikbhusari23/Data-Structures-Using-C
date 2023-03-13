/*

Q1. Count of elements
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


*/


#include<stdio.h>

void main(){

    int arr[100],n,i,j,count=0;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i]<arr[j]){
                count++;
                break;
            }
        }
    }

    printf("Count of elements: %d",count);

}