/*

Q2. Good Pair
Problem Description :
- Given an array A and an integer B.
- A pair(i, j) in the array is a good pair if i != j and (A[i] + A[j] == B).
- Check if any good pair exist or not.
- Return 1 if good pair exist otherwise return 0.
Example Input
Input 1:
A = [1,2,3,4]
B = 7
Output 1:
1
Input 2:
A = [1,2,4]
B = 4
Output 2:
0
Input 3:
A = [1,2,2]
B = 4
Output 3:
1
Example Explanation :
Explanation 1:
(i,j) = (3,4)
Explanation 2:
No pair has a sum equal to 4.
Explanation 3:
(i,j) = (2,3)

*/

#include <stdio.h>

void main(){
    
        int size,count=0;
    
        printf("Enter the size of array: ");
        scanf("%d",&size);
    
        int arr[size];
    
        printf("Enter the elements of array: ");
        for(int i=0;i<size;i++){
            scanf("%d",&arr[i]);
        }
    
        int B;
        printf("Enter the no to check good pair: ");
        scanf("%d",&B);
    
        for(int i=0;i<size-1;i++){
            for(int j=i+1;j<size;j++){
                if(arr[i]+arr[j]==B){
                    count++;
                    break;
                }
            }
        }
    
        printf("%d",count);
    
}