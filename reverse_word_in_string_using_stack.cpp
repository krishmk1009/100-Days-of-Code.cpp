#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;

string reverseWords(string &str)
{

    stack<char> store;
    string word = "";
    reverse(str.begin(), str.end());
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            store.push(str[i]);
        }

        else
        {
            while (!store.empty())
            {
                word += store.top();
                store.pop();
            }

            word += ' ';
        }
    }
    while (!store.empty())
    {
        word += store.top();
        store.pop();
    }

    return word;
}
int main()
{
    string str = "sky is blue";
    cout << reverseWords(str);
    return 0;
}
