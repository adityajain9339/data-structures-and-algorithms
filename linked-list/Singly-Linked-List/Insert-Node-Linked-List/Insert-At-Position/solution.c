#include <stdio.h>
#include <stdlib.h>
// [Approach] Using Iterative Method - O(n) time and O(1) space:------------>
// The idea is simple: create a new node, 
// then find the spot where it should be placed.
//  Walk through the list until you reach the node just before that position. 
//  Link the new node’s next to the following node,
//   and adjust the previous node’s next to point to the new node.

// Step By Step Implementations:

// 1.Initialize a variable , say curr points to head and allocate the memory to the new node with the given val.
// 2.Traverse the Linked list using curr pointer upto position-1 nodes.
// 3.If curr's next is not null , then next pointer of the new node points to the next of curr node.
// 4.The next pointer of current node points to the new node.
// 5.return the head of linked list.

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
struct node *InsertAtSpecificPosition(struct node *head, int value, int postion)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (postion < 1)
    {
        printf("postion is not correct !!.. the postion is from 1 to onward : \n");
    }
    else if (postion == 1)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->next = head;
        head = newnode;
    }
    else
    {
        struct node *temp = head;
        for (int i = 2; i < postion - 1 && temp != NULL; i++)
        { // this condition is very improtant postion -1 and also check that temp not equal to the NULL ....
            temp = temp->next;
        }
        if (temp == NULL){ // if the postion is greater that the number of node!!..
            printf("you enter the wrong postion\n");
            return head;
        }
        else
        {
            struct node *newnode = (struct node *)malloc(sizeof(struct node));
            newnode->data = value;
            newnode->next = temp->next;
            temp->next = newnode;
        }
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
    head = InsertAtSpecificPosition(head, 80, 10);
    printf("linked list after insetion : ");
    traverseList(head);

    return 0;
}