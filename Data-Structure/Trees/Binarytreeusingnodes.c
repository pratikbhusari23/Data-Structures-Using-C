// Inorder : 2 5 4 1 6 3 8 7
// preorder : 1 2 4 5 3 6 7 8

// INORDER : 2 5 4 1 6 3 8 7
// postorder : 5 4 2 6 8 7 3 1

// Construct a binary tree using inorder and preorder nodes


#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int val) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int search(int inorder[], int start, int end, int val) {
    int i;
    for(i = start; i <= end; i++) {
        if(inorder[i] == val)
            return i;
    }
    return -1; // return -1 if val is not found in inorder[]
}

struct Node *constructTree(int inorder[], int preorder[], int start, int end) {
    static int preIndex = 0;

    if(start > end)
        return NULL;

    struct Node *newNode = createNode(preorder[preIndex++]);

    if(start == end)
        return newNode;

    int inIndex = search(inorder, start, end, newNode->data);

    newNode->left = constructTree(inorder, preorder, start, inIndex-1);
    newNode->right = constructTree(inorder, preorder, inIndex+1, end);

    return newNode;
}

void inorder(struct Node *root) {
    if(root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    int inorderArr[] = {4, 2, 5, 1, 6, 3, 7};
    int preorder[] = {1, 2, 4, 5, 3, 6, 7};

    struct Node *root = constructTree(inorderArr, preorder, 0, 6);

    inorder(root);
    printf("\n");

    return 0;
}


// Output:
// 4 2 5 1 6 3 7
//


