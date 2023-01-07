// write a program that copies the contents of the source singly linear linked list whose data is the prime number to the destination singly linear linked list.


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


struct Node * CloneprimeNodes(struct Node * head1){

    struct Node * temp=head1;
    
    while(temp!=NULL){
        int flag=0;
        for(int i=2 ; i<temp->data ; i++){
            if(temp->data%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
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
        }
        temp=temp->next;
    }
    return head2;
}


void main(){

    int Nodecount,num1,num2;
    printf("Enter no of nodes for Source Linked List\n");
    scanf("%d",&Nodecount);
    for(int i=0 ; i<Nodecount ; i++){
        head1=addNode(head1);
    }
    printSLL(head1);
    printf("\nTotal Count = %d",count());

    CloneprimeNodes(head1);
    printf("\n");
    printSLL(head2);
}
