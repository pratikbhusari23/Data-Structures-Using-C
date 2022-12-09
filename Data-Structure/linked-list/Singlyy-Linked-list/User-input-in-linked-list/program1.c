#include<stdio.h>
#include<stdlib.h>

typedef struct Movie{
	
	char mName[20];
	float imdb;
	struct Movie * next;
}Mov;

Mov * head=NULL;

void addNode(){
	
	Mov * newNode = (Mov*)malloc(sizeof(Mov));
	printf("Enter Movie name : ");
	fgets(newNode->mName,15,stdin);
	printf("Enter Movie Rating : ");
	scanf("%f",&newNode->imdb);
	getchar();
	if(head==NULL){
		head=newNode;
	}
	else {
		Mov * temp = head;
		while(temp->next!=NULL){
			temp=temp->next;	
		}
		temp->next=newNode;
	}
}
void printll(){
	
	Mov * temp=head;
	while(temp!=NULL){
		printf("%s",temp->mName);
		printf("%f\n",temp->imdb);
		temp=temp->next;
	
	}

}

void main(){
	
	addNode();
	addNode();
	printll();
	
}

