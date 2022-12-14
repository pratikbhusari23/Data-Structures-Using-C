#include<stdio.h>
#include<stdlib.h>

typedef struct Node {

	int data;
	struct Node *next;
}nd;

nd * head=NULL;

nd * CreateNode(){
	
	nd * newNode=(nd*)malloc(sizeof(nd));
	
	printf("Enter Data : \n");
	scanf("%d",&newNode->data);
	
	newNode->next=NULL;
	return newNode;
}

void addnode(){
	
	nd * newNode=CreateNode();

	if(head==NULL){
		head=newNode;
		newNode->next=head;
	}
	else {
		nd * temp=head;

		while(temp->next!=head){
			temp=temp->next;
		}
		temp->next=newNode;
		newNode->next=head;
	}

}

int CountNode(){
	
	nd * temp=head;
	int count=0;


	while(temp->next!=head){
		count++;
		temp=temp->next;
	}
	count++;
	return count;

}
void addAtfirst(){
	
	nd * newNode=CreateNode();
	
	if(head==NULL){
		head=newNode;
		newNode->next=head;
	}
	else {
		nd * temp=head;
		while(temp->next!=head){
			temp=temp->next;
		}
		temp->next=newNode;
		newNode->next=head;
		head=newNode;
	}
}

void addAtlast(){
	
	addnode();

}

int addAtpos(int pos){

	int cnt=CountNode();

	if(head==NULL){
		printf("Your Linked List is Empty ! ");
	}
	else if(pos <1 || pos>cnt+1){
		printf("Invalid Position Entered ");
	}
	else if(pos==cnt+1){
		addAtlast();
	}
	else{
		nd * newNode=CreateNode();
		nd * temp=head;

		while(pos-2){
			temp=temp->next;
			pos--;
		}
		newNode->next=temp->next;
		temp->next=newNode;
	}
}

void deleteFirst(){
	
	nd * temp=head;
	int cnt=CountNode();
	if(head==NULL){
		printf("Your Linked list is Empty !");
	}
	else if(cnt==1){
		temp->next=NULL;
		free(temp);
		head=NULL;
	}
	else {
		while(temp->next!=head){
			temp=temp->next;
		}
		temp->next=head->next;
		free(head);
		head=temp->next;

	}

}
void deleteLast(){
	
	nd * temp=head;

	if(head==NULL){
		printf("Your Linked list is empty !");
	}
	else{
		if(temp->next=head){
			temp->next=NULL;
			free(temp);
			head=NULL;
		
		}
	
		while(temp->next->next!=head){
			temp=temp->next;
		}
		temp->next->next=NULL;
		free(temp->next);
		temp->next=head;
		
	}
}

int deleteAtpos(int pos){
	
	int cnt=CountNode();

	if(head==NULL){
		printf("Nothing to delete , Your Liniked List is Empty !");
	}
	else if(pos<1 || pos>cnt){
		printf("Nothing to delete , Invalid Position Entered ! ");
	}
	else if(pos==1){
		deleteFirst();
	}
	else if(pos==cnt){
		deleteLast();
	}
	else {
		nd * temp=head;
		while(pos-2){
			temp=temp->next;
			pos--;
		}
		
		nd * temp2=temp->next;
		temp->next=temp->next->next;
		temp2->next=NULL;
		free(temp2);
	}
}
void printSCLL(){
	
	nd * temp=head;

	if(head==NULL){
		printf("Your Linked List is Empty !");
	}
	else {
		while(temp->next!=head){
			printf("|%d|->",temp->data);
			temp=temp->next;
		}
		printf("|%d|",temp->data);
	}

}
void main(){

	char ch;
	int pos,pos1,num,nd;

	do{
		printf("Which Operation do You want : \n");
		printf("1.addNode\n");
		printf("2.Count Nodes in Linked List\n");
		printf("3.Add at First\n");
		printf("4.Add at Position\n");
		printf("5.Add at last \n");
		printf("6.Delete first\n");
		printf("7.Delete at Position\n");
		printf("8.Delete last\n");
		printf("9.Print Linked List\n");

		int choice;
		printf("Enter Your Choice : \n");
		scanf("%d",&choice);

		switch(choice){

			case 1 : 
				printf("How Many Nodes Do You want to create : ");
				scanf("%d",&nd);
				for(int i=0 ; i<nd ; i++){
					addnode();
				}
				break;
			case 2 : 
				printf("Count of Nodes in Linked List Are : %d",CountNode());
				break;
			case 3 : 
				addAtfirst();
				break;
			case 4 : 
				printf("At which Position do You want to insert : \n");
				scanf("%d",&pos);
				addAtpos(pos);
				break;
			case 5 :
				addAtlast();
				break;
			case 6 : 
				deleteFirst();
				break;
			case 7 : 
				printf("At which position do you want to delete : \n");
				scanf("%d",&pos1);
				deleteAtpos(pos1);
				break;
			case 8 :
				deleteLast();
				break;
			case 9 :
				printSCLL();
				break;
			default :
				printf("Invalid Input : ");
		
		
		}
		getchar();
		printf("\nDo you want any other Functionalities again if yes type 'Y' || 'y' : ");
		scanf("%c",&ch);
	}
	while(ch=='y'||ch=='Y');


}

