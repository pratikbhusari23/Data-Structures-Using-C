#include<stdio.h>

int mergeandsortingoftwoarray(int arr1[],int arr2[],int size){
	int arr3[size];

	for(int i=0 ; i<size-1 ; i++){
		for(int j=0 ; j<size-1-i ; j++){
			if(arr1[j]>arr1[j+1]){
				int temp=arr1[j];
				arr1[j]=arr1[j+1];
				arr1[j+1]=temp;
			}
		}
	}
	
	for(int i=0 ; i<size-1 ; i++){
		for(int j=0 ; j<size-1-i ; j++){
			if(arr2[j]>arr2[j+1]){
				int temp=arr2[j];
				arr2[j]=arr2[j+1];
				arr2[j+1]=temp;
			}
		}
	}
	
	for(int i=0 ; i<size*2 ; i++){
		if(i<size){
			arr3[i]=arr1[i];
		}
		else{
			arr3[i]=arr2[i-size];
		}
	}
	
	for(int i=0 ; i<size*2 ; i++){
		printf("%d\t",arr3[i]);
	}

	printf("\nsorted array\n");
	for(int i=0 ; i<size*2 ; i++){
		for(int j=0 ; j<size*2-1-i ; j++){
			if(arr3[j]>arr3[j+1]){
				int temp=arr3[j];
				arr3[j]=arr3[j+1];
				arr3[j+1]=temp;
			}
		}
	}

	for(int i=0 ; i<size*2 ; i++){
		printf("%d\t",arr3[i]);
	}
}


void main(){

	int arr1[]={2,8,4,6,9};
	int arr2[]={3,1,7,5,8};

	int size=sizeof(arr1)/sizeof(arr1[0]);
	mergeandsortingoftwoarray(arr1,arr2,size);

}
