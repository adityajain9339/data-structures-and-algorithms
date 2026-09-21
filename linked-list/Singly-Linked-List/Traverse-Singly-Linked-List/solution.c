#include <stdio.h>
#include <stdlib.h>
// Traversal of Singly Linked List (Iterative Approach)

// Step-by-Step Algorithm:---------->

// 1. We will initialize a temporary pointer to the head node of the singly linked list.
// 2. After that, we will check if that pointer is null or not null, if it is null, then return.
// 3. While the pointer is not null, we will access and print the data of the current node, then we move the pointer to next node.

struct node
{
    int data;
    struct node *next;
};

struct node *creatinglinkedlist(int no_node)
{
    struct node *head = NULL;
    struct node *temp = NULL;
    for (int i = 1; i <= no_node; i++)
    {
        int data;
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data in the node %d : ", i);
        scanf("%d", &data);
        if (newnode == NULL)
        {
            printf("Memory allocation failed\n");
            return head;
        }
        newnode->data = data;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp->next = newnode;
        }

        temp = newnode;
    }
    return head;
}
void traverseList(struct node *head)
{
    while (head != NULL)
    {
        printf("%d", head->data);
        if (head->next != NULL)
            printf(" -> ");
        head = head->next;
    }
    printf("\n");
}

int main()
{

    int number_node;
    printf("enter the number of node you what to create:\n");
    scanf("%d", &number_node);
    
    if (number_node > 0)
    {
        struct node *head = creatinglinkedlist(number_node);
        traverseList(head);
    }
    else
    {
        printf("value is not negetive so the function is not call!!!");
    }

    return 0;
}