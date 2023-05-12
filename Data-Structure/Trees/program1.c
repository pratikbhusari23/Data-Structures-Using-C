// Implementing stack using Linked List

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(int val){

    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = top;
    top = newNode;
}

bool isEmpty(){

    if(top == NULL)
        return true;
    else
        return false;
}

int pop(){

    if(isEmpty()){
        printf("Stack is empty\n");
        return -1;
    }
    else{
        
        struct Node *temp = top;
        int val = temp->data;
        top = top->next;
        free(temp);
        return val;
    }
}

void display(){

    if(isEmpty())
        printf("Stack is empty\n");
    else{
        struct Node *temp = top;
        while(temp != NULL){
            printf("%d ",temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void main(){

    int choice, val;
    bool loop = true;

    while(loop){

        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){

            case 1:
                printf("Enter the value to be pushed: ");
                scanf("%d",&val);
                push(val);
                break;
            case 2:
                val = pop();
                if(val != -1)
                    printf("The popped element is %d\n",val);
                break;
            case 3:
                display();
                break;
            case 4:
                loop = false;
                break;
            
            default:
                printf("Invalid choice\n");
        }
    }
}


 