// Write a program that accepts two singly linear linked list from the user and concat the first N elements of the source linked list after destination linked list.

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

// struct Node * ConcatLL(struct Node * head , struct Node * head2){

//     struct Node * temp=head1;

//     while(temp->next!=NULL){

//         temp=temp->next;
//     }
//     temp->next=head2;
//     return head2;
// }

struct Node * ConcatNLL(int num){

    struct Node * temp=head2;
    struct Node * temp2=head1;

    while(temp->next!=NULL){

        temp=temp->next;
    }
    while(num!=0){
        temp->next=temp2;
        temp2=temp2->next;
        temp=temp->next;
        num--;
    }
    temp->next=NULL;
    return head2;
}


void main(){

    int Nodecount,num;
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
    printf("\n");
    printSLL(head1);
    printf("\n");
    printSLL(head2);
    printf("\n");

    printf("\nEnter no of Nodes to Concat\n");
    scanf("%d",&num);

    ConcatNLL(num);

    printSLL(head2);
    printf("\n");
}
