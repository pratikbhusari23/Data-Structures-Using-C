/*

Q5. Array Rotation
Problem Description :
- Given an integer array A of size N and an integer B, you have to return
the same array after rotating it B times towards the right.
- Return the array A after rotating it B times to the right
Problem Constraints :
1 <= N <= 105
1 <= A[i] <=109
1 <= B <= 109
Example Input :
Input 1:
A = [1, 2, 3, 4]
B = 2
Output 1:
[3, 4, 1, 2]
Input 2:
A = [2, 5, 6]
B = 1
Output 2:
[6, 2, 5]
Example Explanation :
Explanation 1:
Rotate towards the right 2 times
[1, 2, 3, 4] => [4, 1, 2, 3] => [3, 4, 1, 2]
Explanation 2:
Rotate towards the right 1 time
[2, 5, 6] => [6, 2, 5]


*/

#include <stdio.h>

void main(){
    
        int size;
    
        printf("Enter the size of array: ");
        scanf("%d",&size);
    
        int arr[size];
    
        printf("Enter the elements of array: ");
        for(int i=0;i<size;i++){
            scanf("%d",&arr[i]);
        }
    
        int rotate;
        printf("Enter the number of times to rotate: ");
        scanf("%d",&rotate);
    
        for(int i=0;i<rotate;i++){
            int temp=arr[size-1];
            for(int j=size-1;j>0;j--){
                arr[j]=arr[j-1];
            }
            arr[0]=temp;
        }
        
        printf("Rotated array is: ");
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
    
}