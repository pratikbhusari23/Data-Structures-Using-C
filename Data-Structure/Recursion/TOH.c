#include<stdio.h>

void TOH(int N, char fromRod , char viaRod, char toRod){
	
	if(N>0){
		
		TOH(N-1,fromRod ,toRod,viaRod);
		printf(" Move disk %d from %c->%c\n ",N,fromRod,toRod);
		TOH(N-1,viaRod,fromRod,toRod);
	}
}

void main(){

	int N;
	printf("Enter the number of disks: ");
	scanf("%d",&N);
	
	TOH(N,'A','B','C');

}
