#include<stdio.h>
#include<stdlib.h>

typedef struct Employee{
	
	char name[20];
	int id;
	struct Employee * next;

}emp;
emp * head = NULL;

emp * CreateNode(){
	
	emp * newnode= (emp*)malloc(sizeof(emp));
	getchar();
	printf("Enter Employee name : ");
	char ch;
	int i=0;

	while((ch=getchar())!='\n'){
		(*newnode).name[i]=ch;
		i++;
	}
	printf("Enter id : \n");
	scanf("%d",&newnode->id);

	newnode->next=NULL;
	return newnode;

}

void addnode(){
	
	emp * newnode=CreateNode();
	if(head==NULL){
		head=newnode;
	}
	else {
		emp *temp=head;

		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;

	}

}

void printll(){
	
	emp * temp = head;
	while(temp != NULL){
		printf("|%s->",temp->name);
		printf("%d|",temp->id);
		temp = temp->next;	
	}
	printf("\n");
}

void main() {
	
	int nodes;
	printf("Enter no of Nodes : ");
	scanf("%d",&nodes);

	for(int i=0 ; i<nodes ; i++){
		addnode();
	}
	printll();
}


