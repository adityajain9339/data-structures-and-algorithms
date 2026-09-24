#include <stdio.h>
#include <stdlib.h>

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
struct node *DeletionAtSpecificPosition(struct node *head, int postion)
{
    if (postion < 1)
    {
        printf("postion is not correct !!.. the postion is from 1 to onward : \n");
    }
    else if (postion == 1)// deletion from the biginning...
    {
        struct node *temp = head;
        head = head->next;
        free(temp);
    }
    else
    {
       
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
    head = InsertAtSpecificPosition(head, 25, 2);
    printf("linked list after insetion : ");
    traverseList(head);

    return 0;
}