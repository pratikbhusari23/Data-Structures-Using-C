#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Employee{

	char name[20];
	int id;
	struct Employee *next;
}Emp;
Emp *head = NULL;//Declaring Head Globally
Emp* createNode(){

	Emp *newNode = (Emp*)malloc(sizeof(Emp));//Creating New Node on Heap

	getchar();//for removing '\n'
	printf("Enter name : ");
	int i=0;
	char ch;
	while((ch=getchar())!='\n'){//We can get output in single line 
		newNode->name[i] = ch;
		i++;
	}
	printf("Enter id : ");
	scanf("%d",&(newNode->id));
	newNode->next = NULL;
	
	return newNode;
}
void addNode(){

	Emp *newNode = createNode();
	
	if(head==NULL){

		head = newNode;
	}else{
		Emp *temp = head;
		while(temp->next!=NULL){

			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void printLL(){
		
	Emp *temp = head;

	if(head==NULL){

		printf("Your Linked List is Empty");
	}
	while(temp!=NULL){

		printf("|%s->",temp->name);
		printf("%d|",temp->id);
		temp = temp ->next;
	}
}
void count(){

	Emp *temp = head;
	int cnt = 0;
	while(temp!=NULL){
		cnt ++;
		temp = temp->next;
	}
	printf("Number of nodes in LL : %d ",cnt);
}

void addAtFirst(){
	
	Emp *newNode = createNode();
	
	if(head==NULL){
		
		head =newNode;
	}else{
		newNode->next = head;
		head = newNode;
	}	
}
void addAtPos(int pos){
	
	Emp *temp = head;
	
	if(head==NULL){
		addAtFirst();
	}else{
	Emp *newNode = createNode();
	while(pos-2){

		temp =temp->next;
	}

	newNode->next = temp->next;
	temp->next = newNode;
	}
}
void main(){
	
	int num;
	printf("How many nodes do you want : ");
	scanf("%d",&num);
	
	for(int i=1;i<=num;i++){
		
		addNode();
	}
	int choice,pos;
	printf("which Function do you want :\n");
	
	char ch;
	do {
		printf("\t1.Print Linked list\n");
		printf("\t2.Count nodes in Linked List\n");
		printf("\t3.Add at first\n");
		printf("\t4.Add at specific positon\n");
	
		printf("Enter Your Choice : ");
		scanf("%d",&choice);
		switch(choice){

			case 1:
				printLL();
				break;
			case 2:
				count();
				break;
			case 3:
				addAtFirst();
				break;
			case 4:

				printf("At which position do you want to insert : ");
				scanf("%d",&pos);
				addAtPos(pos);
				break;
			default:
				printf("You entered wrong choice\n");
				break;
			}
		printf("\nDo you want any other functionality again if yes type 'y' OR 'Y': ");
		scanf(" %c",&ch);


		}while(ch=='y'||ch=='Y');
}
