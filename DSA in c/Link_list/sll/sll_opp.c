#include <stdio.h>
#include <stdlib.h>

// Define a node structure
struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
// Function to insert a node at the beginning
struct Node *insertAtBeginning(struct Node *head, int value)
{
    struct Node *newNode = createNode(value);
    newNode->next = head; // Link new node to old head
    head = newNode;       // Update head
    return head;
}

// Function to insert a node at the end
struct Node *insertAtEnd(struct Node *head, int value)
{
    struct Node *newNode = createNode(value);

    if (head == NULL)
    {
        // If list is empty, new node becomes head
        return newNode;
    }

    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next; // Move to the last node
    }
    temp->next = newNode; // Attach new node at the end
    return head;
}

// Function to insert a node at a given position (1-based index)
struct Node *insertAtPosition(struct Node *head, int value, int position)
{
    struct Node *newNode = createNode(value);

    // If inserting at the beginning
    if (position == 1)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }

    struct Node *temp = head;
    int count = 1;

    // Traverse until the node before the desired position
    while (temp != NULL && count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp == NULL)
    {
        printf("Position out of range!\n");
        return head;
    }

    // Insert new node
    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

// Function to traverse and print the linked list
void traverseList(struct Node *head)
{
    struct Node *temp = head;
    printf("Linked List elements: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    // Create nodes
    struct Node *head = createNode(10);
    struct Node *second = createNode(20);
    struct Node *third = createNode(30);
    struct Node *fourth = createNode(40);

    // Link nodes
    head->next = second;
    second->next = third;
    third->next = fourth;

    // Traverse the list
    printf("Org LL");
    traverseList(head);

    // Insert at beginning
    head = insertAtBeginning(head, 5);

    printf("\nAfter Insertion at Beginning:\n");
    traverseList(head);

    // Insert at end
    head = insertAtEnd(head, 50);

    printf("\nAfter Insertion at End:\n");
    traverseList(head);

    // Insert at position 3 (middle)
    head = insertAtPosition(head, 25, 3);

    printf("\nAfter Insertion at Position 3:\n");
    traverseList(head);

    return 0;
}