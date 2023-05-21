//Q.Inorder Traversal without recursion(iterative)


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

void insert(int item)
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->left = NULL;
    temp->right = NULL;

    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        ptr = root;
        while (ptr != NULL)
        {
            if (item < ptr->data)
            {
                if (ptr->left == NULL)
                {
                    ptr->left = temp;
                    return;
                }
                else
                {
                    ptr = ptr->left;
                }
            }
            else
            {
                if (ptr->right == NULL)
                {
                    ptr->right = temp;
                    return;
                }
                else
                {
                    ptr = ptr->right;
                }
            }
        }
    }
}

void inorder(struct node *ptr)
{
    if (ptr == NULL)
    {
        printf("\nTree is empty\n");
        return;
    }

    if (ptr->left != NULL)
    {
        inorder(ptr->left);
    }
    printf("%d ", ptr->data);
    if (ptr->right != NULL)
    {
        inorder(ptr->right);
    }
}

void inorder_iterative(struct node *ptr)
{
    struct node *stack[20];
    int top = -1;

    if (ptr == NULL)
    {
        printf("\nTree is empty\n");
        return;
    }

    while (1)
    {
        while (ptr != NULL)
        {
            stack[++top] = ptr;
            ptr = ptr->left;
        }

        if (top != -1)
        {
            ptr = stack[top--];
            printf("%d ", ptr->data);
            ptr = ptr->right;
        }
        else
        {
            break;
        }
    }
}

void main()
{
    int choice, item;
    while (1)
    {
        printf("\n1.Insert\n2.Inorder Traversal\n3.Inorder Traversal without recursion\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nEnter the item to be inserted: ");
                scanf("%d", &item);
                insert(item);
                break;

            case 2:
                inorder(root);
                break;

            case 3:
                inorder_iterative(root);
                break;

            case 4:
                exit(0);

            default:
                printf("\nInvalid choice\n");
                break;
        }
    }
}


