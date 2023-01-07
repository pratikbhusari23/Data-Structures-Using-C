// write a program that accepts two singly linear linked list from the user and also accept range and concat eleements of the source singly linear linked list after destination singly linear linked list.

#include<stdio.h>
#include<stdlib.h>

struct Node {

    int data;
    struct Node * next;
};

struct Node * head1=NULL;
struct Node * head2=NULL;

struct Node * CreateNode(){

    struct Node * newNode=(struct Node*)malloc(sizeof(struct Node));

    printf("Enter Data :\n");
    scanf("%d",&newNode->data);

    newNode->next=NULL;
    return newNode;
}

struct Node * addNode(struct Node * head){

    struct Node * newNode = CreateNode();

    if(head==NULL){
        head=newNode;
    }
    else{
        struct Node * temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    return head;
}

int count1(){
	struct Node *temp=head1;
	int count1=0;
	while(temp!=NULL){
		temp=temp->next;
		count1++;
	}
	return count1;
}

void printSLL(struct Node * head){

    struct Node * temp=head;

    while(temp->next!=NULL){

        printf("|%d|->",temp->data);
        temp=temp->next;
    }
    printf("|%d|",temp->data);
}

void ConcatNLL(int num1 , int num2 , int count1){

    struct Node * temp1=head1;
    struct Node * temp2=head2;
    int value1=num1;
    int value2=num2;

    if(num1>count1){
        printf("Invalid Range");
        return;
    }
    if(num2>count1){
        printf("Invalid Range");
        return;
    }
   
    for(int i=0 ; i<num1-1 ; i++){
        temp1=temp1->next;
    }
    struct Node * temp3=temp1;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    for(int i=num1 ; i<=num2 ; i++){

        temp2->next=temp3;
        temp2=temp2->next;
        temp3=temp3->next;
    }
    temp2->next=NULL;
    printf("in concat function");
}


void main(){

    int Nodecount,num1,num2;
    printf("Enter no of nodes for Source Linked List\n");
    scanf("%d",&Nodecount);
    for(int i=0 ; i<Nodecount ; i++){
        head1=addNode(head1);
    }
    printf("Enter no of nodes for destination linked list\n");
    scanf("%d",&Nodecount);

    for(int i=0 ; i<Nodecount ; i++){
        head2=addNode(head2);
    }

    printSLL(head1);
    printf("\n");
    printSLL(head2);
    printf("\n");
    printf("Total Count of source linked list is = %d",count1());
    printf("\n");

    printf("\nEnter starting range\n");
    scanf("%d",&num1);
    printf("enter ending range\n");
    scanf("%d",&num2);

    ConcatNLL(num1,num2,count1());
    printf("\n");
    printSLL(head2);
    printf("\n");

}
