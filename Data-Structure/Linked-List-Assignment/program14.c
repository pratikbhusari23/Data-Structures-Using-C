// write a program that accepts a source singly linear linked list and a destination singly linear linked list and check whether the source list is a sublist of the destination list.The function returns the lastposition at which the sublist is found in the destinstion list.
// input source linked list : |73|->|80|->|70|
// input destination linked list : |10|->|73|->|80|->|70|->|22|->|73|->|80|->|70|->|21|
// output : 6



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

void CheckSublist(struct Node * head1,struct Node * head2){

    struct Node * temp1=head1;
    struct Node * temp2=head2;
    int count1=count(head1);
    int count2=count(head2);
    int flag=0;
    int pos=0;
    int i=0;
    while(temp2!=NULL){
        if(temp1->data==temp2->data){
            temp1=temp1->next;
            temp2=temp2->next;
            flag++;
            if(flag==count1){
                pos=i;
            }
        }
        else{
            temp1=head1;
            temp2=temp2->next;
            flag=0;
        }
        i++;
    }
    if(flag==count1){
        printf("Sublist found at position %d",pos);
    }
    else{
        printf("Sublist not found");
    }
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

    int count1=count(head1);
    int count2=count(head2);

    printf("\n");
    printSLL(head1);
    printf("\t%d\n",count1);

    printf("\n");
    printSLL(head2);
    printf("\t%d\n",count2);
    printf("\n");
    
    CheckSublist(head1,head2);
    printf("\n");


}
