 //Write a program that searches all occurences of a particular element from a singly linear linked list.

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

	struct Node *newNode = CreateNode();
	
	if(head==NULL){

		head = newNode;
	}else{
		struct Node *temp = head;
		while(temp->next!=NULL){

			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void printLL(){
        
    struct Node *temp = head;

    if(head==NULL){

        printf("Your Linked List is Empty");
    }
    else{
        
        while(temp->next!=NULL){
            printf("|%d|->",temp->data);
            temp=temp->next;
        }
        printf("|%d|",temp->data);

    }
}

void occurence(){

    int count=0;
    int num;
    struct Node *temp = head;

    printf("Enter the number you want to search for:\n");
    scanf("%d",&num);

    while(temp!=NULL){

        if(temp->data==num){
            count++;
            break;
        }
        count++;
        temp=temp->next;
    }
    printf("The number %d occured at position %d in the linked list",num,count);
}

int main(){

    int choice;

    while(1){

        printf("\n1. Add Node\n");
        printf("2. Print Linked List\n");
        printf("3. Occurence of a number\n");
        printf("4. Exit\n");

        printf("Enter your choice:\n");
        scanf("%d",&choice);

        switch(choice){

            case 1: addNode();
                    break;

            case 2: printLL();
                    break;

            case 3: occurence();
                    break;

            case 4: exit(0);
                    break;

            default: printf("Invalid Choice");
        }
    }
}
