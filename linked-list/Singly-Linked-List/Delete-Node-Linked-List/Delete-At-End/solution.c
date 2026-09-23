#include <stdio.h>
#include <stdlib.h>
// Approach:-------------->

// To perform the deletion operation at the end of linked list, 
// we need to traverse the list to find the second last node,
//  then set its next pointer to null.
//   If the list is empty then there is no node to delete or has only one node then point head to null.


// Step-by-step approach:---------->

// 1.Check if list is empty then return NULL.
// 2.If the list has only one node then delete it and return NULL.
// 3.Traverse the list to find the second last node.=> Set the next pointer of second last node to NULL.

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
struct node *DeletionAtEND(struct node *head)
{
    

    if (head == NULL)
    {
        printf("Linked list is empty.\n");
        return NULL;
    }
    else if(head->next==NULL){
        free(head);
        return NULL;
    }
    else
    {
        struct node *SecondLast = head;
        while (SecondLast->next->next!=NULL)
        {
            SecondLast = SecondLast->next;
        }
        struct node *temp = SecondLast->next;
        temp->next =NULL;
        free(temp);
    }
    return head;
}

int main()
{

    int number_node;
    printf("enter the number of node you what to create:\n");
    scanf("%d", &number_node);

    struct node *head = creatinglinkedlist(number_node);
    printf("linked list before Deletion : ");
    traverseList(head);
    head = DeletionAtEND(head);
    printf("linked list after Deletion : ");
    traverseList(head);

    return 0;
}