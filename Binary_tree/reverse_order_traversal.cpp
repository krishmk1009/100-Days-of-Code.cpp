#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    cout << "Enter Data: " << endl;
    int data;
    cin >> data;

    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "enter data for left node of " << data << endl;
    root->left = buildTree(root->left);
    cout << "enter data for right node of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void reverseLeverOrder(Node *root)
{
    queue<Node *> q;
    stack<Node *> s;

    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        s.push(temp);
        q.pop();

        if (temp->left)
        {
            q.push(temp->left);
        }

        if (temp->right)
        {
            q.push(temp->right);
        }
    }

    while (!s.empty())
    {
        Node *temp = s.top();
        cout << temp->data << " ";
        s.pop();
    }
}

int main()
{
    Node *root = NULL;
    root = buildTree(root);
    reverseLeverOrder(root);
    return 0;
}

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
