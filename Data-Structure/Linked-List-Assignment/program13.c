// write a program that accepts a source singly linear linked list and a destination singly linear linked list and check whether the source list is a sublist of the destination list.The function returns the firstposition at which the sublist is found in the destinstion list.

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

void CheckSublistandposition(struct Node * head1,struct Node * head2){
    
    struct Node * temp1=head1;
    struct Node * temp2=head2;
    int count1=count(head1);
    int count2=count(head2);
    int flag=0;
    int position=0;
    int count=0;
    int cnt=0;
    while(temp2!=NULL){
        
        cnt++;
        if(temp1->data==temp2->data){
            flag=1;
            count++;
            temp1=temp1->next;
            temp2=temp2->next;
            position=cnt;
        }
        else{
            flag=0;
            count=0;
            temp1=head1;
            temp2=temp2->next;
            position++;
        }
        if(count==count1){
            position=position-count1+1;
            break;
        }
        
    }
    if(flag==1){
        printf("Sublist found at position %d",position);
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


    printSLL(head1);
    printf("%d\n",count1);

    printf("\n");
    printSLL(head2);
    printf("%d\n",count2);
    printf("\n");

    CheckSublistandposition(head1,head2);
    
    printf("\n");


}
