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

void addAtLast(){
	addNode();
}

int addAtPos(int pos){
	
	nd * newNode=CreateNode();

	int cnt = count();
	if(head==NULL){
		head=newNode;
	}
	else if(pos<1 || pos>cnt+1){
		printf("Invalid Position Enterd !");
	}
	else if(pos==1){
		addAtfirst();
	}
	else if(pos==cnt+1){
		addAtLast();

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

void deletefirst(){
	
	nd * temp=head;
	int cnt=count();
	if(head==NULL){
		printf("Your Linked List is Empty : ");
	}
	else if(cnt==1){

		free(head);
		head=NULL;

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

int deleteAtpos(int pos2){

	nd * temp=head;
	int cnt=count();

	if(head==NULL){

		printf("Your Linked List is Empty !\n");
		
	}

	else if(pos2<1 || pos2>cnt){

		printf("Invalid Position1\n");
	}
	else if(pos2==1){

		deletefirst();
	}
	else if(pos2==cnt){
		deleteLast();
	}
	else{

		nd * temp1=head;
		while(pos2-2){

			temp=temp->next;
			pos2--;
		}
		temp->next=temp->next->next;
		free(temp->next->prev);
		temp->next->prev=temp;
	}

}
	

void printll(){
	
	nd * temp=head;

	if(head==NULL){
		printf("Your Linked List is Empty !");
	}
	else {
		while(temp->next!=NULL){
			printf("|%d|->",temp->data);
			temp=temp->next;
		}
		printf("|%d|",temp->data);
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
	if(temp!=NULL){

		head=temp->prev;
	}
}
void main(){
	
	int num,choice,pos1,pos2;
	char ch;

	do {	
		
		printf("\t1.Add Mutliple Nodes\n");
		printf("\t2.Add Node At first\n");
		printf("\t3.Add Node At Position\n");
		printf("\t4.Add Node At Last\n");
		printf("\t5.Delete First Node\n");
		printf("\t6.Delete a Node At Position\n");
		printf("\t7.Delete Last Node\n");
		printf("\t8.Reverse Linked List\n");
		printf("\t9.Count Nodes\n");
		printf("\t10.Print Linked List\n");

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
				addAtLast();
				break;
			case 5 :
				deletefirst();
				break;
			case 6 :

				printf("Which Position do you want to Delete : ");
				scanf("%d",&pos2);
				deleteAtpos(pos2);
				break;

			case 7 :
				deleteLast();
				break;
			case 8 :
				intreverse();
				break;
			case 9 :
				printf("Total Nodes in Linked are %d",count());
				break;
			case 10 :
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
