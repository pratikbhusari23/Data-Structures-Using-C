/*

Q4. Reverse the array using recursion
Problem Description :
- You are given a constant array A.
- You are required to return another array which is the reversed form of the
input array.
- Return an integer array.
Problem Constraints :
1 <= A.size() <= 10000
1 <= A[i] <= 10000
Example Input :
Input 1:
A = [1,2,3,2,1]
Output 1:
[1,2,3,2,1]
Input 2:
A = [1,1,10]
Output 2:
[10,1,1]
Example Explanation :
Explanation 1:
- Reversed form of input array is same as original array
Explanation 2:
- Reverse of [1,1,10] is [10,1,1]


*/


#include <stdio.h>

int reverse(int arr[],int start,int end){
    int temp;
    if(start>=end){
        return 0;
    }
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    reverse(arr,start+1,end-1);
}

void main(){
    
        int size;
    
        printf("Enter the size of array: ");
        scanf("%d",&size);
    
        int arr[size];
    
        printf("Enter the elements of array: ");
        for(int i=0;i<size;i++){
            scanf("%d",&arr[i]);
        }
    
        reverse(arr,0,size-1);
        
        printf("Reversed array is: ");
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
    
}++