#include <stdio.h>
#include <stdlib.h>
// To insert a new node at the front,
//we create a new node and point its next reference to the current head of the linked list. 
//Then, we update the head to be this new node. 
//This operation is efficient because it only requires adjusting a few pointers.

// Algorithm:

// 1.Make the first node of Linked List linked to the new node
// 2.Remove the head from the original first node of Linked List
// 3.Make the new node as the Head of the Linked List.

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
struct node *InsertionAtBeginning(struct node *head, int value)
{

    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = head;
    head = newnode;

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
    head = InsertionAtBeginning(head, 25);
    printf("linked list after insetion : ");
    traverseList(head);

    return 0;
}