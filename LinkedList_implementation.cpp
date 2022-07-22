#include <iostream>
using namespace std;

class Node
{

public:
    // defining data and next
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;

        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Succesfully removed " << value << " from linked list" << endl;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    // inserting at start case
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    // inserting at tail node case

    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // create the new node which we want to insert
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(Node *&head, int position)

{
    // delete at 1st position
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    // delete at any position or last position
    else
    {

        Node *curr = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position)
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

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *node1 = new Node(10);

    // cout<< node1->data<<endl;
    // cout<< node1->next<<endl;

    Node *head = node1;
    Node *tail = node1;
    // print(head);
    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtHead(head, 40);

    insertAtPosition(head, tail, 5, 23);
    cout << endl;
    print(head);

    cout << "Your Current Head is : " << head->data << endl;
    cout << "Your Current Tail is : " << tail->data << endl;
    deleteNode(head, 1);
    print(head);
    cout << "Your Current Head is : " << head->data << endl;
    cout << "Your Current Tail is : " << tail->data << endl;
    cout<<endl;
    return 0;
}
