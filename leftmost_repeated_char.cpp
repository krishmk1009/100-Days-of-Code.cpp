#include <iostream>
using namespace std;
int leftMostChar(string str)
{

    int ans = -1;

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                ans = i;
                return ans;
            }
            
        }
        
    }

    return -1;
}

int main()
{
    string str = "abbc";
    cout << leftMostChar(str)<<endl;
    cout<<'b'-'a';
    return 0;
}
