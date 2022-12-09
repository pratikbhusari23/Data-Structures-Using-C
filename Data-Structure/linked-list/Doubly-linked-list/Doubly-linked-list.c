#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node{

	struct Node * prev;
	int data;
	struct Node * next;
}nd;

nd * head = NULL;

nd * CreateNode(){

	nd * newNode=(nd*)malloc(sizeof(nd));

	printf("Enter Data : ");
	scanf("%d",&newNode->data);

	newNode->next=NULL;
	newNode->prev=NULL;
	return newNode;
}

void addNode(){
	
	nd *newNode=CreateNode();

	if(head==NULL){
		head=newNode;
	}
	else {
		nd * temp=head;

		while(temp->next!=NULL){
		
			temp=temp->next;
		}
		temp->next=newNode;
		newNode->prev=temp;
	}

}

void addAtfirst(){
	
	nd * newNode=CreateNode();

	if(head==NULL){
		head=newNode;	
	}
	else {
		newNode->next=head;
		head->prev=newNode;
		head=newNode;
	}
}
int count(){

	nd * temp =head;
	int cnt = 0;
	while(temp!=NULL){
		cnt++;
		temp=temp->next;
	}
	return cnt;
}

int addAtPos(int pos){
	
	nd * newNode=CreateNode();
	int cnt = count();
	if(head==NULL){
		head=newNode;
	}
	else if(pos<1 || pos>cnt){
		printf("Invalid Position Enterd !");
	}
	else {
		nd * temp=head;

		while(pos-2){
			temp=temp->next;
			pos--;
		}
		newNode->next=temp->next;
		newNode->prev=temp;
		temp->next->prev=newNode;
		temp->next=newNode;

	}

}

void addAtlast(){
	addNode();
}

void deletefirst(){
	
	nd * temp=head;

	if(head==NULL){
		printf("Your Linked List is Empty : ");
	}
	else {
		temp->next->prev=NULL;
		head=temp->next;
		free(temp);
	}
}
void deleteLast(){
	
	nd * temp =head;

	if(head==NULL){
		printf("Your Linked List is Empty !");
	}
	else {
		while(temp->next->next!=NULL){
			temp=temp->next;
		}
		temp->next->prev=NULL;
		free(temp->next);
		temp->next=NULL;
	}

}
void printll(){
	
	nd * temp=head;

	if(head==NULL){
		printf("Your Linked List is Empty !");
	}
	else {
		while(temp!=NULL){
			printf("|%d|->",temp->data);
			temp=temp->next;
		}
	}

}
void main(){
	
	int num,choice,pos1,pos2;
	char ch;

	do {	
		
		printf("\t1.AddNode\n");
		printf("\t2.Add At first\n");
		printf("\t3.Add At Position\n");
		printf("\t4.Add At Last\n");
		printf("\t5.Delete First\n");
		printf("\t6.Delete At Pos\n");
		printf("\t7.Delete Last\n");
		printf("\t8.Print Linked List\n");

		printf("\nWhich Function Do you want to do for a Doubly Linked list : ");
		scanf("%d",&choice);
		
		switch(choice){
			
			case 1 :
				printf("How Many Nodes You want in Liniked list : ");
				scanf("%d",&num);
				for(int i=0 ; i<num ; i++){
					addNode();
				}
				break;
			case 2 :
				addAtfirst();
				break;
			case 3 :
				printf("At Which Position Do you want to addNode : ");
				scanf("%d",&pos1);
				addAtPos(pos1);
				break;
			case 4 :
				addAtlast();
				break;
			case 5 :
				deletefirst();
				break;
			case 6 :/*
				printf("Which Position do you want to Delete : ");
				scanf("%d",&pos2);
				deleteAtpos(pos2);
				*/
				break;
			case 7 :
				deleteLast();
				break;
			case 8 :
				printll();
				break;
			default :
				printf("You entered Wrong Choice : ");
		}
			printf("Do You want To perform Any Other Functionalities ?\nIf Yes Press 'Y' or 'y' ");
			getchar();
			scanf("%c",&ch);
	
	}
	
	while(ch=='Y' || ch =='y');	
		
}
