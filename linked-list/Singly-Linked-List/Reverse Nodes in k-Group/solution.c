#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

// Create a new node
struct Node* createNode(int data)
{
    struct Node *newNode = malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

// Reverse nodes in groups of k
struct Node* reverseKGroup(struct Node *head, int k)
{
    struct Node *current = head;
    struct Node *prev = NULL;
    struct Node *next = NULL;
    struct Node *groupStart = head;
    struct Node *groupEnd;
    struct Node *previousGroupEnd = NULL;

    while (current != NULL)
    {
        // Find the kth node
        groupEnd = current;

        for (int i = 1; i < k && groupEnd != NULL; i++)
        {
            groupEnd = groupEnd->next;
        }

        // Less than k nodes remaining
        if (groupEnd == NULL)
        {
            break;
        }

        // Save the node after the group
        struct Node *nextGroup = groupEnd->next;

        // Reverse the current group
        prev = nextGroup;
        current = groupStart;

        while (current != nextGroup)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        // Connect previous group to reversed group
        if (previousGroupEnd != NULL)
        {
            previousGroupEnd->next = groupEnd;
        }
        else
        {
            // First group becomes the new head
            head = groupEnd;
        }

        // The old start becomes the end of this group
        previousGroupEnd = groupStart;

        // Move to next group
        groupStart = nextGroup;
        current = nextGroup;
    }

    return head;
}

// Print linked list
void printList(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }

    printf("NULL\n");
}

int main()
{
    struct Node *head = createNode(1);

    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);
    head->next->next->next->next->next = createNode(6);
    head->next->next->next->next->next->next = createNode(7);
    head->next->next->next->next->next->next->next = createNode(8);

    int k = 3;

    printf("Original List:\n");
    printList(head);

    head = reverseKGroup(head, k);

    printf("After Reversing in Groups of %d:\n", k);
    printList(head);

    return 0;
}