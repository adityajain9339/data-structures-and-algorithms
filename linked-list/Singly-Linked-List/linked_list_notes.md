Singly Linked List Tutorial-------------->

A singly linked list is a fundamental data structure, it consists of nodes where each node contains a data field and a reference to the next node in the linked list. The next of the last node is null, indicating the end of the list. Linked Lists support efficient insertion and deletion operations.


Understanding Node Structure
In a singly linked list, each node consists of two parts: data and a pointer to the next node. This structure allows nodes to be dynamically linked together, forming a chain-like sequence.



In this example, the Node class contains an integer data field (data) to store the information and a pointer to another Node (next) to establish the link to the next node in the list.

Creating an Example Linked List of Size 3 to Understand Working
Create the first node

Allocate memory for the first node and Store data in it.
Mark this node as head.
Create the second node

Allocate memory for the second node and Store data in it.
Link the first node’s next to this new node.
Create the third node

Allocate memory for the third node and Store data in it.
Link the second node’s next to this node.
Set its next to NULL to ensure that the next of the last is NULL.




#include<iostream>
using namespace std;
​
// singly linked list node structure
class Node {
public:
    int data;
    Node* next;
​
    // constructor to initialize a new node with data
    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};
​
int main() {
    
    // Create the first node (head of the list)
    Node* head = new Node(10);
​
    // Link the second node
    head->next = new Node(20);
​
    // Link the third node
    head->next->next = new Node(30);
​
    // Link the fourth node
    head->next->next->next = new Node(40);
​
    // printing linked list
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Output
10 20 30 40 
Common Operation in Linked List
A linked list supports several operations. Here are the most common ones:

Traversal : Traversing singly linked list
Insertion : At the beginning, At the end and At a specific position
Deletion : From beginning, From end and From a specific position
Searching : Find whether a given key exists in the list
Updating (Modification) : Modify contents of linked list.
Reversal : Reverse the linked list and make the last node as new head.


Applications of Linked List----------->
Applications of Linked Lists

    Implementing stacks and queues — Linked lists allow efficient insertion and deletion, making them suitable for stacks and queues.

    Dynamic memory management — Operating systems can use linked structures to keep track of free and allocated memory blocks.

    Graph representation — Adjacency lists used to represent graphs are commonly implemented using linked lists or similar dynamic structures.

    Polynomial representation — Each node can store a coefficient and exponent, making polynomial operations easier.

    Hash tables — Linked lists can handle collisions using separate chaining.

    Undo/Redo operations — A doubly linked list can maintain previous and next states in applications such as editors.

    Music playlists and image viewers — Doubly linked lists allow moving to the next or previous item.

    Browser navigation — Backward and forward navigation can be modeled using doubly linked structures.

    Round-robin scheduling — Circular linked lists can cycle repeatedly through processes or tasks.

    Sparse matrices — Linked structures can store only non-zero elements, reducing unnecessary storage.

Advantage------->

Dynamic size (no fixed limit like arrays)
Efficient insertion and deletion at beginning and end. We also have insertion at the middle efficient if we have reference or pointer to the node after which we need to insert.
Can implement complex data structures like stack, queue, graph

Disadvantage------------>

Extra memory required for storing pointers
No direct/random access (need traversal)
Cache unfriendly (not stored in contiguous memory)
Comment
H

harendrakumar123

