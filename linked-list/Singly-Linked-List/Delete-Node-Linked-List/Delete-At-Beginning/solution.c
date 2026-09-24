// Deletion at beginning (Removal of first node) in a Linked List
#include <stdio.h>
#include <stdlib.h>
// By Shifting head node to next node of head - O(1) Time and O(1) Space----------->
// To remove the first node of a linked list, 
// store the current head in a temporary variable (temp), 
// move the head pointer to the next node, delete the temporary head node and finally , 
// return the new head of the linked list.

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
struct node *DeleteAtBeginning(struct node *head)
{
    if (head == NULL)
    {
        printf("Linked list is empty.\n");
        return NULL;
    }

    struct node *temp = head;
    head = head->next;
    free(temp);

    return head;
}

int main()
{

    int number_node;
    printf("enter the number of node you what to create:\n");
    scanf("%d", &number_node);
    if (number_node <= 0)
    {
        printf("Number of nodes must be greater than 0.\n");
        return 1;
    }

    struct node *head = creatinglinkedlist(number_node);
    printf("linked list before Deletion : ");
    traverseList(head);
    head = DeleteAtBeginning(head);
    printf("linked list after Deletion : ");
    traverseList(head);
    return 0;
}