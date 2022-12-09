#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct IndianCricketTeam{
	
	char Pname[20];
	int bOrder;
	struct IndianCricketTeam *next;

}india;

india *head = NULL;//Declaring Head Globally
india* createNode(){

	india *newNode = (india*)malloc(sizeof(india));//Creating New Node on Heap
	getchar();
	printf("Enter Player name : ");
	char ch;
	int i=0;
	while((ch=getchar())!='\n'){

		(*newNode).Pname[i]=ch;
		i++;
	}
	printf("Enter Batting Order : ");
	scanf("%d",&(newNode->bOrder));
	newNode->next = NULL;
	
	return newNode;
}
void addNode(){

	india *newNode = createNode();
	
	if(head==NULL){

		head = newNode;
	}else{
		india *temp = head;
		while(temp->next!=NULL){

			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void printLL(){
		
	india *temp = head;

	if(head==NULL){

		printf("Your Linked List is Empty");
	}
	while(temp!=NULL){
		
		printf("|%s|%d|->",temp->Pname,temp->bOrder);
		temp= temp->next;
	}
}
int count(){

	india *temp = head;
	int cnt = 0;
	while(temp!=NULL){
		cnt ++;
		temp = temp->next;
	}
	return cnt;
}

void addAtFirst(){
	
	india *newNode = createNode();
	
	if(head==NULL){
		
		head =newNode;
	}else{
		newNode->next = head;
		head = newNode;
	}	
}
void addLast(){

	addNode();
}
int addAtPos(int pos){
	
	int cnt = count();
	if(pos <1 || pos>cnt+2){

		printf("You have entered wrong pos\n");
		return -1;
	}else if(pos==1){
		addAtFirst();
	}else if(pos==cnt+1){
		addLast();
	}
	else{
		india *newNode = createNode();
		india *temp = head;
		while(pos-2){ // If someone enters position greater than count of Linkedlist
		
			temp =temp->next;
			pos--;
	       }

	newNode->next = temp->next;
	temp->next = newNode;
	}
	
}
void deleteFirst(){

	if(head == NULL){

		printf("Your LinkedList is Empty\n");
	}else if(head->next==NULL){
		free(head);
		head=NULL;
	}
	else{
		india * temp=head;
		head = temp->next;
		free(temp);
	}
}

void deleteAtPos(int pos){
	
	india *temp = head;
	int cnt=count();

	if(pos<1 || pos>cnt){

		printf("You have entered wrong pos it must be greater than zero\n");
	}else if(head == NULL){

		printf("Your LinkedList is Empty \n");
	}else if(pos==1){
		
		deleteFirst();
	}else{
	
		while(pos-2 && (temp->next!=NULL)){ // If someone enters position greater than count of Linkedlist
		
			temp =temp->next;
			pos--;
		}


		india *temp2 = temp->next;
		temp->next = temp->next->next;
		temp2->next = NULL;
		free(temp2);
	}
}
void deleteLast(){

	india *temp = head;
	
	if(head == NULL){

		printf("Your LinkedList is Empty\n");
	}else if(head->next==NULL){
		
		free(head);
		head=NULL;
	}else{
		while(temp->next->next !=NULL){

			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}
void main(){
	
	char ch;
       	int pos,pos1,num,nd;
		do {	
		printf("Which Operation do you want :\n");
		printf("\t1.addNode\n");
		printf("\t2.Count nodes in Linked List\n");
		printf("\t3.Add at first\n");
		printf("\t4.Add at specific positon\n");
		printf("\t5.Add at Last\n");
		printf("\t6.deleteFirst\n");
		printf("\t7.delete from specific positon\n");
		printf("\t8.deleteLast\n");
		printf("\t9.printLinkedList\n");
		int choice;
		printf("Enter your choice : ");
		scanf("\t%d",&choice);
		switch(choice){

			case 1:
				printf("How many Nodes Do You Want : ");
				scanf("%d",&nd);
				for(int i=0 ; i<nd ; i++){
					addNode();
				}
				break;
			case 2:
				printf("Number of Nodes in LL : %d",count());
				break;
			case 3:
				addAtFirst();
				break;
			case 4:
			
				printf("At which position do you want to insert : ");
				scanf("%d",&pos);
				addAtPos(pos);
				break;
                
			case 5:
				addNode();
				break;
			case 6:
				deleteFirst();
				break;
			case 7:
			
				printf("At which position do you want to Delete Node : ");
				scanf("%d",&pos1);
				deleteAtPos(pos1);
				break;
			case 8:
				deleteLast();
				break;
			case 9:
				printLL();
				break;
			default:
				printf("You entered wrong choice\n");
				break;
			}
			getchar();
			printf("\nDo you want any other functionality again if yes type 'y' OR 'Y': ");
			scanf("%c",&ch);


		}while(ch=='y'||ch=='Y');
}
