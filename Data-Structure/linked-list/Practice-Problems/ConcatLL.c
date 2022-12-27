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

// struct Node * ConcatLL(struct Node * head , struct Node * head2){

//     struct Node * temp=head1;

//     while(temp->next!=NULL){

//         temp=temp->next;
//     }
//     temp->next=head2;
//     return head2;
// }

void ConcatNLL(int num){

    struct Node * temp1=head1;

    while(temp1->next!=NULL){

        temp1=temp1->next;
    }
    int val=count()-num;

    struct Node * temp2=head2;

    while(val){

        temp2=temp2->next;
        val--;
    }
    temp1->next=temp2;
}

struct Node * CloneLL(struct Node * head1){

    struct Node * temp=head1;

    while(temp!=NULL){

        struct Node * newNode=(struct Node*)malloc(sizeof(struct Node));
        newNode->data=temp->data;
       
        newNode->next=NULL;

        if(head3==NULL){
            head3=newNode;
        }
        else{
            struct Node * temp2=head3;
            while(temp2->next!=NULL){
                temp2=temp2->next;
            }
            temp2->next=newNode;
        }
        temp=temp->next;
    }
    return head3;
}



void main(){

    int Nodecount,num;
    printf("Enter no of Nodes : Linked List 1\n");
    scanf("%d",&Nodecount);
    for(int i=0 ; i<Nodecount ; i++){
        head1=addNode(head1);
    }
    printf("Enter No of Nodes : Linked List 2\n");
    scanf("%d",&Nodecount);

    for(int i=0 ; i<Nodecount ; i++){
        head2=addNode(head2);
    }

    printSLL(head1);
    printSLL(head2);
    printf("Total Count = %d",count());

    printf("\nEnter no of Nodes to Concat\n");
    scanf("%d",&num);

    ConcatNLL(num);
    printSLL(head1);

    CloneLL(head1);
    printf("\n");
    printSLL(head3);
}
