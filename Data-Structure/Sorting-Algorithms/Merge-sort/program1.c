#include<stdio.h>

int sumoftwoarray(int arr1[],int arr2[],int size){
	int arr3[size];
	for(int i=0 ; i<size ; i++){

		arr3[i]=arr1[i]+arr2[i];
	}
	
	for(int i=0 ; i<size ; i++){
		printf("%d\n",arr3[i]);
	}
}


void main(){

	int arr1[]={2,8,4,6,9};
	int arr2[]={3,1,7,5,8};

	int size=sizeof(arr1)/sizeof(arr1[0]);

	sumoftwoarray(arr1,arr2,size);

}
