#include<stdio.h>
#include<malloc.h>

typedef struct Node{

	int data;
	struct Node *next;
}N;
N* head = NULL;
N* createNode(){

	N* newNode = (N*)malloc(sizeof(N));

	printf("Enter data : ");
	scanf("%d",&newNode->data);
	newNode->next = NULL;
	return newNode;
}
void addNode(){
	
	N *newNode = createNode();
	
	if(head==NULL){
		head = newNode;
	}else{
		N *temp = head;
		while(temp->next !=NULL){

			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void printLL(){

	N *temp = head;
	if(head==NULL){
		printf("LL is empty");
	}else{
		while(temp!=NULL){
			printf("|%d|",temp->data);
			temp =temp->next;
		}
	}

	printf("\n");
}

void addition(){
	int sum = 0;
	N* temp = head;
	if(head!=NULL){
		
		while(temp!=NULL){

			sum = sum + temp->data;
			temp = temp->next;
		}
		printf("Sum of all Nodes = %d\n",sum);
	}
}
void addFirstLast(){

	int sum = 0;
	N* temp = head;

	if(head!=NULL){

		sum = sum + (head->data);

		if(head->next !=NULL){

			while(temp->next!=NULL){

				temp = temp->next;
			}
			sum = sum + (temp->data);
		}
	}
	printf("Addition = %d \n",sum);
}

void maxi(){

	int max = 0;
	N *temp = head;
	if(head!=NULL){

		max = head->data;
		temp = temp->next;
		while(temp!=NULL){

			if(max < (temp->data)){
				max = temp->data;
			}
			temp = temp->next;
		}
	}
	printf("Max = %d\n",max);
}
void mini(){

	int min = 0;
	N *temp = head;
	if(head!=NULL){

		min = head->data;
		temp = temp->next;
		while(temp!=NULL){

			if(min > (temp->data)){
				min = temp->data;
			}
			temp =temp->next;
		}
	}
	printf("Min = %d\n",min);
}

void isPrime(){

	int num = 0;
	N* temp = head;
	int count = 0;
	if(head!=NULL){

		while(temp!=NULL){

			num = temp->data;
			int flag = 1;
			if(num>1){
			for(int i=2;i<=(num/2);i++){

				if(num%i==0){

					flag = 0;
					break;
				}
			}
			if(flag){
				count++;
				if(count==1)
					printf("Prime numbers in linked list : ");
				printf("%d ",num);
			}
			}
			temp = temp->next;
		}
	}
	printf("\n");
}

void main(){

	int num;
	printf("How many nodes do you want : ");
	scanf("%d",&num);

	for(int i=1;i<=num;i++){

		addNode();
	}
	printLL();
	addition();
	addFirstLast();
	maxi();
	mini();
	isPrime();
}