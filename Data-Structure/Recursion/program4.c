#include<stdio.h>

void fun(){
	
	//static
	int x=10;
	printf("%d\n",x);

	if(x==1){
		return;
	
	}
	fun(--x);
}
void main(){
	
	fun();
}
