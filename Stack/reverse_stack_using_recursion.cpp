#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &st, int val)
{
    if (st.empty())
    {
        st.push(val);
        return;
    }

    int tp = st.top();
    st.pop();

    insertAtBottom(st, val);

    st.push(tp);
}
void reverseStack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    int val = st.top();

    st.pop();

    reverseStack(st);

    insertAtBottom(st, val);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    // reverseStack(st);

    while (!st.empty())
    {
        int tp = st.top();
        cout << tp << endl;
        st.pop();
    }
    return 0;
}
