#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

struct Node {
	
	int data;
	struct Node * next;
};
int countNode=0;
struct Node * head=NULL;

int eleCount(){
	
	struct Node * temp=head;
	
	int count=0;

	while(temp!=NULL){

		count++;
		temp=temp->next;
	}
	return count;
}

boolisfull(){
	
	if(eleCount()==countNode){

		return true;
	}
	else {
		return false;
	}
}

struct Node * createNode(){
	
	struct Node * newNode=(struct Node *)malloc(sizeof(struct Node));

	printf("Enter Data\n");
	scanf("%d\n",&newNode->data);
	newNode->next=NULL;
	return newNode;
}	

