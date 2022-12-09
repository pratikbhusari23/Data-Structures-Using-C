#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct data{

	int data;
	struct data * next;
}d;

d * head = NULL;

d *  createNode(){
	
	d * newNode = (d*)malloc(sizeof(d));
	
	printf("Enter Data : ");
	scanf("%d",&newNode->data);

	newNode->next=NULL;
	return newNode;

}
void addnode(){

	d * newNode=createNode();

	if(head==NULL){
		head=newNode;
	}
	else{
		d *temp=head;
		while(temp->next != NULL){

			temp=temp->next;
		}
		temp->next=newNode;
	}
}

int count(){
	
	int count=0;

	d * temp=head;
	while(temp!=NULL){

		count++;
		temp=temp->next;
	}
	return count;

}
void addAtfirst(){
	
	d *newNode=createNode();

	if(head == NULL){
		head=newNode;
	}
	else {
		newNode->next=head;
		head=newNode;
	}

}
void addAtlast(){
	addnode();
}

int addAtpos(int pos){
	
	int cnt = count();
	if(pos < 1 || pos >cnt +1){

		printf("Ohhhh Noooo ! You entered invalid position");
		return -1;
	}
	else {
		if(pos==1){

			addAtfirst();

		}
		else if(pos==cnt+1){

			addAtlast();
		
		}
		else {
		
			d * newNode = createNode();
			d * temp = head;

			while(pos-2){

				temp = temp->next;
				pos--;
			}
			newNode->next=temp->next;
			temp->next=newNode;
		}
		return 0;
	}
}
void deletefirst(){
	
	d *temp= head;

	if(head==NULL){

		printf("Your Linked List is empty");
	
	}
	else {
		head=temp->next;
		free(temp);
	}
}

int deleteAtpos(int pos){
	
	d * temp=head;
	int cnt=count();

	if(pos < 1 || pos>cnt){

		printf("You entered wrong position");
		return -1;
	}
	else{
		if(pos==1){

			deletefirst();
		}
		while(pos-2 && (temp->next!=NULL)){

			temp=temp->next;
			pos--;
		}
		d * temp2=temp->next;
		temp->next=temp->next->next;
		temp2->next=NULL;
		free(temp2);
	
	}


}

void deleteAtlast(){
	
	d * temp=head;
	if(head==NULL){

		printf("Your linked list is empty");
	}
	while(temp->next->next!=NULL){

		temp=temp->next;
	}
	free(temp->next);
	temp->next=NULL;
}
int occurence(int num){

	if(head==NULL){
		printf("Your Liniked List is Empty\n");	
	return -1;
	}
	else {
		d * temp=head;
		int i=0,count=1;
		while(temp!=NULL){
			if(temp->data==num){
				i=count;
			}
			count++;
			temp=temp->next;
		}
		if(i==0){
			printf("Input Not present in linked list ");
		return 0;
		}
		temp=head;
		i--;
		int j=0;
		count=1;

		while(i){
			if(temp->data==num){
				j=count;
			}
			count++;
			temp=temp->next;
			i--;
		}
		if(j==0){

			printf("%d is only present once : ",num);
		}
		else {
			printf("second occurence of %d is at node %d  ",num,j);
		}
	
	
	}


}
void printll(){
	
	d * temp=head;

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
		printf("10.Check Occurence\n");

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
				printf("Count of Nodes in Linked List Are : %d",count());
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
				deletefirst();
				break;
			case 7 : 
				printf("At which position do you want to delete : \n");
				scanf("%d",&pos1);
				deleteAtpos(pos1);
				break;
			case 8 :
				deleteAtlast();
				break;
			case 9 :
				printll();
				break;
			case 10 :
				printf("Which No do you want to search ?\n");
				scanf("%d",&num);
				occurence(num);
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
