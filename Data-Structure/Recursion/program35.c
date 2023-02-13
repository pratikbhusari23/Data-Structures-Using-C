#include<stdio.h>
#include<stdbool.h>

bool sortedarr(int arr[] , int size){

	if(size==-1){

		return true;
	
	}
	else if(arr[size]>arr[size+1]){
		
		return false;
	}

	else {
		return sortedarr(arr,size-1);
	}

}

void main(){
	
	int size;
	printf("Enter Size");
	scanf("%d",&size);

	int arr[size];

	
	for(int i=0 ; i<size ; i++){

		scanf("%d",&arr[i]);
	}
	
	int ret=sortedarr(arr,size-2);

	if(ret==true){

		printf("Sorted");
	}
	else 
		printf("Not Sorted");	

}




