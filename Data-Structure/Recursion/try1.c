#include<stdio.h>

// int findelement(int arr[],int size , int key){
	
// 	int mid,count;
// 	for(int i=0 ; i<size-1 ; i++){
// 		count++;
// 		if(arr[i]>arr[i+1]){
// 			mid = i;
// 			break;

		
// 		}
	
// 	}
// 	int start =0;
// 	int end=size-1;

// 	if(key>=arr[0] && key<=arr[mid]){      
		
// 		end=mid;
// 	}
// 	else{
// 		start=mid+1;
// 	}


// 	while(start<=end){

// 		mid=start+end/2;

// 		if(arr[mid]==key){
// 			return mid;
// 		}
// 		if(arr[mid]<key){

// 			start=mid+1;
		
// 		}
// 		if(arr[mid]>key){

// 			end=mid-1;
// 		}
	
// 	}
// 	return -1;

// }

int findelement(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid;

    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < arr[end]) {
            if (key > arr[mid] && key <= arr[end]) {     //arr[]={7,8,9,10,1,2,3,4,5,6}
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        } else {
            if (key >= arr[start] && key < arr[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
    }
    return -1;
}


void main(){

	int size ,key;

	printf("Enter Size");
	scanf("%d",&size);
	int arr[size];
	for(int i=0 ; i<size ; i++){
		scanf("%d",&arr[i]);  //arr[]={7,8,9,10,1,2,3,4,5,6}
	}
	printf("Enter Key To Find");
	scanf("%d",&key);

	int ret=findelement(arr,size,key);
	if(ret==-1){
		printf("Not Found");
	}
	else
		printf("Elemeny found at index %d",ret);
}
