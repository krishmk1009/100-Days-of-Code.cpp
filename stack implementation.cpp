// #include <iostream>
// #include <stack>
// using namespace std;

// int main(){

// stack <int> s;

// s.push(4);
// s.push(2);
// s.push(3);

// // cout<<s.top();
// cout<<s.size();
// return 0;
// }

#include <iostream>

using namespace std;

class Stack
{

public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {

        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack is overflow" << endl;
        }
    }

    void pop()
    {

        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack is underflow cant pop an element" << endl;
        }
    }

    int peek()
    {
        if(top >=0){
            return arr[top];
        }
        else{
            cout<<"stack is underflow"<<endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
Stack s(4);
s.push(4);
s.push(2);
s.push(3);
s.push(7);
s.pop();
s.pop();

cout<<s.peek()<<endl;
cout<<s.peek()<<endl;

if(s.isEmpty()){
    cout<<"stack is empty"<<endl;
}
else{
    cout<<"stack is not empty";
}

    return 0;
}
