#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Nodes{

	int data;
	struct Nodes *next;
}Node;
Node *head = NULL;//Declaring Head Globally
Node* createNode(){

	Node *newNode = (Node*)malloc(sizeof(Node));//Creating New Node on Heap
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
		}
		temp->next = newNode;
	}
}

void printLL(){
		
	Node *temp = head;

	if(head==NULL){

		printf("Your Linked List is Empty");
	}
	else{
		
		while(temp->next!=NULL){
			printf("|%d|->",temp->data);
			temp=temp->next;
		}
		printf("|%d|",temp->data);

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

void addAtFirst(){
	
	Node *newNode = createNode();
	
	if(head==NULL){
		
		head =newNode;
	}else{
		newNode->next = head;
		head = newNode;
	}	
}
void addAtPos(int pos){
	
	int cnt = count();
	if(pos <1 || pos>cnt){

		printf("You have entered wrong pos\n");
	}else if(pos==1){
		addAtFirst();
	}else{


		Node *newNode = createNode();
		Node *temp = head;
		while(pos-2 && (temp->next!=NULL)){ // If someone enters position greater than count of Linkedlist
		
		temp =temp->next;
		pos--;
	       }

	newNode->next = temp->next;
	temp->next = newNode;
	}
	
}
void addLast(){

	addNode();
}

void deleteFirst(){

	Node *temp = head;

	if(head == NULL){

		printf("Your LinkedList is Empty\n");
	}else{
	head = temp->next;
	free(temp);
	}
}

void deleteAtPos(int pos){
	
	Node *temp = head;
	if(pos<1){

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


		Node *temp2 = temp->next;
		temp->next = temp->next->next;
		temp2->next = NULL;
		free(temp2);
	}
}
void deleteLast(){

	Node *temp = head;
	
	if(head == NULL){

		printf("Your LinkedList is Empty\n");
	}else if(head->next==NULL){
		
		deleteFirst();
	}else{
		while(temp->next->next !=NULL){

			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}
int occurence(int num){

	if(head==NULL){
		printf("Your Liniked List is Empty\n");	
	return -1;
	}
	else {
		Node * temp=head;
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
			printf("2nd last occurence of %d id at node  %d  ",num,j);
		}
	}
	return 0;
}

void inPlaceReverse(){

    Node * temp1=NULL;
    Node * temp2;

    while(head!=NULL){

        temp2=head->next;
        head->next=temp1;
        temp1=head;
        head=temp2;
    }

    head=temp1;

}

void main(){
	
	char ch;
       	int pos,pos1,num;
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
		printf("\t10.Ocurrence\n");
		printf("\t11.Reverse Linked List\n");
		int choice;
		printf("Enter your choice : ");
		scanf("\t%d",&choice);
		switch(choice){

			case 1:
				printf("How Many Nodes Do you want to add ?\n");
				scanf("%d",&num);
				
				for(int i=0; i<num ; i++){
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
			
				printf("At which position do you want to inset : ");
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
			
				printf("At which position do you want to inset : ");
				scanf("%d",&pos1);
				deleteAtPos(pos1);
				break;
			case 8:
				deleteLast();
				break;
			case 9:
				printLL();
				break;
			case 10:
				printf("Enter Data You want to search : ");
				scanf("%d",&num);
				occurence(num);
				break;
			case 11:
				inPlaceReverse();
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
