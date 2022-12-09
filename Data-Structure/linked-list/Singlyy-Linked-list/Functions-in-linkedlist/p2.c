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

void addfun(int pos){
	
	Node * temp=head;
	int occur2=0,occur1=0,count=1;
	while(temp!=NULL){
		if(temp->data==pos){
			occur2=occur1;
			occur1=count;

		}
		count++;
		temp=temp->next;

	}
	if(count==0){

		printf("invalid input");
	}
	else if(count ==1){
		printf("Ocuurence of %d is 1 times ",occur1);
	}
	else {
		printf("occurencne of %d is at %d",pos,occur2);
	}
}
void main(){
	
	int node;
	printf("How many nodes do you want ");
	scanf("%d",&node);

	for(int i=0 ; i<node ; i++){
		addNode();
	}
	int pos;
	printf("Enter found position");
	scanf("%d",&pos);
	
	addfun(pos);


}
