#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Nodes{

	int data;
	struct Nodes *next;

}Node;

Node * head = NULL;                                              //Declaring Head Globally
Node * createNode(){

	Node *newNode = (Node*)malloc(sizeof(Node));                //Creating New Node on Heap
	printf("Enter Data : ");
	scanf("%d",&(newNode->data));
	newNode->next = NULL;
	
	return newNode;

}

void addNode(){

	Node *newNode = createNode();
	
	if(head==NULL){

		head = newNode;

	}else{
		Node *temp = head;

		while(temp->next!=NULL){

			temp = temp->next;
		
        }temp->next = newNode;
	}
}

void printLL(){
		
	Node *temp = head;

	if(head==NULL){

		printf("Your Linked List is Empty");
	}
	while(temp!=NULL){
		
		if(temp->next !=NULL){
			printf("|%d|->",temp->data);
		}else{
			printf("|%d|",temp->data);
		}
		temp= temp->next;
	}
}

int count(){

	Node *temp = head;
	int cnt = 0;

	while(temp!=NULL){
		cnt ++;
		temp = temp->next;

	}
	return cnt;
}

void inPlaceReverse(){

    struct Node * temp1;
    struct Node * temp2;

    while(head!=NULL){

        temp2=head->next;
        head->next=temp1;
        temp1=head;
        head=temp2;
    }

    head=temp1;

}

