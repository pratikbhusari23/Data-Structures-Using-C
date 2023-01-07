// write a program that accepts a source singly linear linked list from the user and copies the contents into the destination singly linear linked list in ascending order.
//without Using Array and Bubble Sort

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

int count(struct Node *head){
	struct Node *temp=head;
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

void CloneinAscendingOrder(struct Node * head){
    struct Node * temp=head;
    struct Node * temp2=head2;
    int count1=count(head);
    int count2=count(head2);
    int arr[count1];
    int i=0;
    while(temp!=NULL){
        arr[i]=temp->data;
        temp=temp->next;
        i++;
    }
    for(int i=0 ; i<count1 ; i++){
        for(int j=i+1 ; j<count1 ; j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0 ; i<count1 ; i++){
        struct Node * newNode=(struct Node*)malloc(sizeof(struct Node));
        newNode->data=arr[i];
        newNode->next=NULL;
        if(head2==NULL){
            head2=newNode;
        }
        else{
            struct Node * temp=head2;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newNode;
        }
    }
    printSLL(head2);
}
void main(){

    int Nodecount,num1,num2;
    printf("Enter no of nodes for Source Linked List\n");
    scanf("%d",&Nodecount);
    for(int i=0 ; i<Nodecount ; i++){
        head1=addNode(head1);
    }


    printf("\n");
    printSLL(head1);
    printf("\n");
    CloneinAscendingOrder(head1);
    printf("\n");


}