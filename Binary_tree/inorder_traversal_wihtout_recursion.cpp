#include <iostream>

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

void inorder(Node *root)
{

    stack<Node *> s;
    Node *curr = root;

    while (!s.empty() || curr != NULL)
    {
        if (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }

        else
        {
            curr = s.top();
            s.pop();
            cout << curr->data << " ";
            curr = curr->right;
        }
    }
}
int main()
{
    Node *root = NULL;
    root = buildTree(root);
    inorder(root);
    return 0;
}

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
// 1 2 4 -1 -1 5 -1 -1 3 -1 -1
