#include<stdio.h>

void fun(int x){

	printf("%d\n",x);
}
void main(){
	
	for(int i=10 ; i>=1 ; i--){
		fun(i);
	}
}
