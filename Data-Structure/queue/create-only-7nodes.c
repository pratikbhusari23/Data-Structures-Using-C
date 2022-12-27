#include<stdio.h>
#include<stdlib.h>

struct Node {

    int data;
    struct Node * next;
};

struct Node * front=NULL;
struct Node * rear=NULL;
int cnt=7,flag;

struct Node * CreateNode(){

    struct Node * newNode=(struct Node*)malloc(sizeof(struct Node));

    if(newNode==NULL){
        printf("Memory Full\n");
        exit(0);
    }

    printf("Enter Data :\n");
    scanf("%d",&newNode->data);

    newNode->next=NULL;
    return newNode;
}
