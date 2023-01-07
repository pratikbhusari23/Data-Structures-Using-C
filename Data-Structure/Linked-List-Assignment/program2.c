// write a program that accepts two singly linear linked list from the user and concat source linked list after destination linked list.

#include<stdio.h>
#include<stdlib.h>

struct Node {

    int data;
    struct Node * next;
};

struct Node * head1=NULL;
struct Node * head2=NULL;
struct Node * head3=NULL;

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

int count(){
	struct Node *temp=head1;
	int count=0;
	while(temp!=NULL){
		temp=temp->next;
		count++;
	}
	return count;
}
void printSLL(struct Node * head){

    struct Node * temp=head;

    while(temp->next!=NULL){

        printf("|%d|->",temp->data);
        temp=temp->next;
    }
    printf("|%d|",temp->data);
}

struct Node * ConcatLL(struct Node * head , struct Node * head2){

    struct Node * temp=head2;

    while(temp->next!=NULL){

        temp=temp->next;
    }
    temp->next=head1;
    return head2;
}


void main(){

    int Nodecount,num;
    printf("Enter no of Nodes for source linked list \n");
    scanf("%d",&Nodecount);
    for(int i=0 ; i<Nodecount ; i++){
        head1=addNode(head1);
    }
    printf("Enter No of Nodes for destination Linked list\n");
    scanf("%d",&Nodecount);

    for(int i=0 ; i<Nodecount ; i++){
        head2=addNode(head2);
    }

    printSLL(head1);
    printf("\n");
    printSLL(head2);
    printf("\n");

    ConcatLL(head1,head2);
    printSLL(head2);

}
