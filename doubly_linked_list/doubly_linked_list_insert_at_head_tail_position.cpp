#include <iostream>
using namespace std;

class Node{

    public:
        int data;
        Node* next;
        Node* prev;


        Node(int d){
            this->data = d;
            this->next = NULL;
            this->prev = NULL;
        }
};

void insertAtHead(Node* &head , int d){
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head= temp;
}
void insertAtEnd(Node* &tail , int d){
Node* temp = new Node(d);
tail->next = temp;
temp->prev = tail;
tail=temp;
}

void insertAtPosition(Node* &head,Node* &tail  , int position , int d){



    if(position == 1){
        insertAtHead(head , d);
        return;

    }
    Node* temp = head;
    int count = 1;

    while(count<position- 1 ){
        temp = temp->next;
        count ++;
    }

    if(temp->next == NULL){
        insertAtEnd(tail , d);
        return;
    }

    Node* newNode = new Node(d);
newNode->next = temp->next;
newNode->next->prev = temp;
temp->next = newNode;
newNode->prev = temp;


}


void print(Node* head){

    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLenght(Node* head){
int len = 0;
 Node* temp = head;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;

}



int main(){
Node* node1 =new Node(5);
Node* head = node1;
Node* tail = node1;
insertAtHead(head , 8);
insertAtEnd(tail , 9);
insertAtEnd(tail , 7);
insertAtEnd(tail , 21);
insertAtPosition(head,tail ,6,24 );


print(head);
cout<<endl;
cout<<head->data;
cout<<endl;
cout<<tail->data;
// cout<<getLenght(head);

    return 0;
}
