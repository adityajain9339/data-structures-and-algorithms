#include <stdio.h>
#include <stdlib.h>

// structure for a linked list node
struct node
{
    int data;
    struct Node *next;
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

// function to traverse and print the singly linked list (recursive)
void traverseList(struct node *head)
{

    // base condition: when the head is NULL
    if (head == NULL)
    {
        printf("\n");
        return;
    }

    // print current node data
    printf("%d", head->data);

    // print arrow if not the last node
    if (head->next != NULL)
    {
        printf(" -> ");
    }

    // recursive call to print next node
    traverseList(head->next);
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