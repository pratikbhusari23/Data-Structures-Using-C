#include<stdio.h>

//int x=0;

void fun(){
	
	static int x=0;
	printf("%d\n",++x);
	fun();
}

void main(){
	
	fun();	
}
