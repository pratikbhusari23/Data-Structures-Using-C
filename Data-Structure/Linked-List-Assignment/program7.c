// Write a program that Copies the last N contents of the source singly Linear linked list to the destination singly linear linked list.

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


struct Node * CloneLL(struct Node * head1,int num){

    struct Node * temp=head1;
    int val=num;
    while(val-2){
        temp=temp->next;
        val--;
    }
    while(temp!=NULL){
        struct Node * newNode=(struct Node*)malloc(sizeof(struct Node));
        newNode->data=temp->data;
       
        newNode->next=NULL;

        if(head2==NULL){
            head2=newNode;
        }
        else{
            struct Node * temp2=head2;
            while(temp2->next!=NULL){
                temp2=temp2->next;
            }
            temp2->next=newNode;
        }
        temp=temp->next;
      
    }
    return head2;
}

void main(){

    int Nodecount,num;
    printf("Enter no of nodes for Source Linked List\n");
    scanf("%d",&Nodecount);
    for(int i=0 ; i<Nodecount ; i++){
        head1=addNode(head1);
    }
    printSLL(head1);
    printf("\nTotal Count = %d",count());

    printf("\nEnter Last N elemets to be copied :\n");
    scanf("%d",&num);
    CloneLL(head1,num);
    printf("\n");
    printSLL(head2);
}
