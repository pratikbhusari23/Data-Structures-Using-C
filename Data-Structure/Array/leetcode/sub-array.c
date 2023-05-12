/*

Given an integer array nums, find the 
subarray
 with the largest sum, and return its sum.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
 

Constraints:

1 <= nums.length <= 105
-104 <= nums[i] <= 104
 
 */

#include<stdio.h>

int maxSubArray(int* nums, int numsSize){
    
    int max_so_far = nums[0];
    int curr_max = nums[0];
    
    for(int i=1;i<numsSize;i++){
        
        if(nums[i] > curr_max + nums[i])
            curr_max = nums[i];
        else
            curr_max = curr_max + nums[i];

        if(curr_max > max_so_far)
            max_so_far = curr_max;

    }
    
    return max_so_far;
    
}

int main(){
    
    int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    
    printf("Max sub-array sum: %d",maxSubArray(nums,numsSize));
    
    return 0;
}