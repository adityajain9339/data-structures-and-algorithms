#include <stdio.h>
#include <stdlib.h>
// Inserting at the end involves traversing the entire list until we reach the last node. 
// We then set the last node's next reference to point to the new node, 
// making the new node the last element in the list.

// Following is the approach to add a new node at the end of the linked list:--------->

// 1.Create a new node and set its next pointer as NULL since it will be the last node.
// 2.Store the head reference in a temporary variable
// 3.If the Linked List is empty, make the new node as the head and return
// 4.Else traverse till the last node
// 5.Change the next pointer of the last node to point to the new node

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
        struct node *newnode = (struct node *)malloc(sizeof(struct node));

        if (newnode == NULL)
        {
            printf("Memory allocation failed\n");
            return head;
        }
        int data;

        printf("Enter the data in the node %d : ", i);
        scanf("%d", &data);

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
struct node *InsertAtEND(struct node *head, int value)
{
    
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    if (head == NULL)// this means we are insert at the beagnning ....
    {
        newnode->next = NULL;
        head= newnode;
        
    }
    else
    {
        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
        newnode->next = NULL;
    }
    return head;
}

int main()
{

    int number_node;
    printf("enter the number of node you what to create:\n");
    scanf("%d", &number_node);

    struct node *head = creatinglinkedlist(number_node);
    printf("linked list before insetion : ");
    traverseList(head);
    head = InsertAtEND(head, 25);
    printf("linked list after insetion : ");
    traverseList(head);

    return 0;
}