/*

If you have a binary tree represented as a linkedlist data structure, 
you can perform an iterative in-order traversal by using a stack data structure 
to keep track of the nodes to be processed. The algorithm for iterative in-order 
traversal involves pushing the left child nodes onto the stack, processing the current node, 
and then pushing the right child nodes onto the stack. Here is an example implementation in C:

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

struct StackFrame{
    struct Node *node;
    struct StackFrame *next;
};

struct StackFrame *top = NULL;

void push(struct Node *node){

    struct StackFrame *newFrame = (struct StackFrame*)malloc(sizeof(struct StackFrame));
    newFrame->node = node;
    newFrame->next = top;
    top = newFrame;
}

bool isEmpty(){
    if(top == NULL)
        return true;
    else
        return false;
}

struct Node *pop(){
    if(isEmpty()){
        printf("Stack is empty\n");
        return NULL;
    }
    else{
        struct StackFrame *temp = top;
        struct Node *node = temp->node;
        top = top->next;
        free(temp);
        return node;
    }
}

void iterativeInorder(struct Node *root){
    struct Node *temp = root;

    while(!isEmpty() || temp != NULL){
        if(temp != NULL){
            push(temp);
            temp = temp->left;
        }
        else{
            temp = pop();
            printf("%d ",temp->data);
            temp = temp->right;
        }
    }
    top = NULL;
}

struct Node *createNode(int val){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;

}

void main(){

    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right = createNode(3);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    iterativeInorder(root);
    printf("\n");
}

