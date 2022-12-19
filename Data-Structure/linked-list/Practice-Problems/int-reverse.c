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
int count(){

	nd * temp =head;
	int cnt = 0;
	while(temp!=NULL){
		cnt++;
		temp=temp->next;
	}
	return cnt;
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
void intreverse(){

	nd * temp=NULL;

	while(head!=NULL){

        temp=head->prev;
		head->prev=head->next;
		head->next=temp;
		head=head->prev;
		
	}
	if(head->prev!=NULL){

		head=temp->prev;
	}
}
void main(){
	
	int num,choice,pos1,pos2;
	char ch;

	do {	
		
		printf("\t1.AddNode\n");
		printf("\t2.Print Linked List\n");
        printf("\t3.Int Reverse\n");

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
				printll();
				break;
			case 3 :
				intreverse();
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
