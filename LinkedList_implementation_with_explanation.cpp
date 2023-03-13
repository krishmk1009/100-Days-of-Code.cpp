#include <iostream>
#include <bits/stdc++.h> // This header file includes many standard libraries, but it's not actually needed in this code

using namespace std;

// Node class for creating linked list
class Node
{
public:
    int data; // Data stored in each node
    Node *next; // Pointer to the next node in the linked list

    // Constructor to create a new node
    Node(int data)
    {
        this->data = data; // Initialize data with the value passed to constructor
        this->next = NULL; // Initialize next pointer to null
    }

    // Destructor to free memory
    ~Node()
    {
        int value = this->data; // Store data value to be deleted in a variable

        if (this->next != NULL) // If next node is not null
        {
            delete next; // Delete the next node recursively
            this->next = NULL; // Set the next pointer to null
        }
        cout << "Succesfully removed " << value << " from linked list" << endl; // Print success message
    }
};

// Function to insert a node at the beginning of the linked list
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d); // Create a new node with the data value
    temp->next = head; // Set the next pointer of the new node to the current head
    head = temp; // Set the new node as the head of the linked list
}

// Function to insert a node at the end of the linked list
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d); // Create a new node with the data value
    tail->next = temp; // Set the next pointer of the current tail to the new node
    tail = temp; // Set the new node as the tail of the linked list
}

// Function to insert a node at a specific position in the linked list
void insertAtPosition(Node *&head, Node *tail, int pos, int d)
{

    if (pos == 1) // If the position is 1, insert at head
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int count = 0;
    while (count < pos) // Traverse the linked list until the desired position is reached
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL) // If the current node is the tail, insert at tail
    {
        insertAtTail(tail, d);
        return;
    }

    Node *newNode = new Node(d); // Create a new node with the data value
    newNode->next = temp->next; // Set the next pointer of the new node to the next node of the current node
    temp->next = newNode; // Set the next pointer of the current node to the new node
}

// Function to delete a node at a specific position in the linked list
void deleteNode(Node *&head, Node *&tail, int pos)
{
    if (pos == 1) // If the position is 1, delete the head
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp; // Delete the head node
    }

    else // For all other positions
    {
        Node *prev = NULL;
        Node *curr = head;

        int count = 0;

        while (count < pos) // Traverse the linked list
        {
           prev = curr;
            curr = curr->next;

            count++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void printList(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);
    insertAtPosition(head, tail, 1, 6);
    insertAtPosition(head, tail, 1, 3);
    deleteNode(head, tail, 3);

    printList(head);
    return 0;
}
