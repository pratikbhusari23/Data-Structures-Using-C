#include<stdio.h>
#include<stdlib.h>

struct Node {

    int data;
    struct Node * next;
};

struct Node * head=NULL;

struct Node * CreateNode(){

    struct Node * newNode=(struct Node*)malloc(sizeof(struct Node));

    printf("Enter Data :\n");
    scanf("%d",&newNode->data);

    newNode->next=NULL;

    return newNode;
}

void addNode(){

    struct Node * newNode = CreateNode();

    if(head==NULL){
        head=newNode;
    }
    else if(head->data > newNode->data){
        newNode->next=head;
        head=newNode;
    }

    else{
        struct Node * temp=head;

        while(temp->next!=NULL && temp->next->data < newNode->data){
            temp=temp->next;
        }

        newNode->next=temp->next;
        temp->next=newNode;

    }
}

void printSLL(){

    struct Node * temp=head;

    while(temp->next!=NULL){

        printf("|%d|->",temp->data);
        temp=temp->next;
    }
    printf("|%d|",temp->data);
}

void main(){
    
        int n;
        printf("Enter No of Nodes :\n");
        scanf("%d",&n);
    
        for(int i=0;i<n;i++){
            addNode();
        }
    
        printSLL();
}
