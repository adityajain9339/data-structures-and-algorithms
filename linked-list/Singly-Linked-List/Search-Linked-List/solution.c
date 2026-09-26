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
void Second_Linked_List(struct node *head, int search)
{
    int found = 0;
    while (head != NULL)
    {
        if (head->data == search)
        {

            found = 1;
            break;
        }
        head = head->next;
    }
    if (found == 1)
    {
        printf("we find that !!");
    }
    else
    {
        printf("the search is not found!!...");
    }
}

int main()
{

    int number_node;
    printf("enter the number of node you what to create: ");
    scanf("%d", &number_node);

    if (number_node > 0)
    {
        struct node *head = creatinglinkedlist(number_node);
        Second_Linked_List(head, 5);
    }
    else
    {
        printf("value is not negetive so the function is not call!!!");
    }

    return 0;
}