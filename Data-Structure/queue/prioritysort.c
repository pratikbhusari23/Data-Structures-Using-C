#include<stdio.h>
#include<stdlib.h>

struct Node {

    int data;
    int priority;
    struct Node * next;
};

struct Node * head=NULL;

struct Node * CreateNode(){

    struct Node * newNode=(struct Node*)malloc(sizeof(struct Node));

    printf("Enter Data :\n");
    scanf("%d",&newNode->data);

    int priority;

    while(1){

        printf("Enter Priority (must be in between [1-5])\n");
        scanf("%d",&priority);

        if(priority>=1 && priority<=5){
            newNode->priority=priority;
            break;
        }
        else{
            printf("Invalid Priority\n");
        }
    }

    newNode->next=NULL;

    return newNode;
}

void addNode(){

    struct Node * newNode = CreateNode();

    if(head==NULL){
        head=newNode;
    }
    else if(head->priority > newNode->priority){
        newNode->next=head;
        head=newNode;
    }

    else{
        struct Node * temp=head;

        while(temp->next!=NULL && temp->next->priority < newNode->priority){
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
