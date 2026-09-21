#include <stdio.h>
#include <stdlib.h>
// Traversal of Singly Linked List (Recursive Approach)
// Step-by-Step Algorithm:---------------->

// 1.Firstly, we define a recursive method to traverse the singly linked list, which takes a node as a parameter.
// 2.In this function, the base case is that if the node is null then we will return from the recursive method.
// 3.We then pass the head node as the parameter to this function.
// 4.After that, we access and print the data of the current node.
// 5.At last, we will make a recursive call to this function with the next node as the parameter.

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