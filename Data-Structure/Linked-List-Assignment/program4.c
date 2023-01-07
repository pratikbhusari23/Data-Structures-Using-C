// write a program that accepts two singly linear linked list from the user and also accept range and concat the last N elemets of the source linked list after destination linked list.

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

void ConcatNLL(int num){

    struct Node * temp1=head2;

    while(temp1->next!=NULL){

        temp1=temp1->next;
    }
    int val=count()-num;

    struct Node * temp2=head1;

    while(val){

        temp2=temp2->next;
        val--;
    }
    temp1->next=temp2;
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

    printSLL(head1);
    printf("\n");
    printSLL(head2);
    printf("\n");
    printf("Total Count = %d",count());
    printf("\n");

    printf("\nEnter no of Nodes to Concat\n");
    scanf("%d",&num);

    ConcatNLL(num);
    printf("\n");
    printSLL(head2);
    printf("\n");

}
