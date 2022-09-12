#include <iostream>
using namespace std;
int leftMostChar(string str)
{

    int ans = -1;

    for (int i = str.length() - 1; i > 0; i--)
    {
        for (int j = i - 1; j > 0; j--)
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
    string str = "mkrushhna";
    cout << leftMostChar(str) << endl;
    cout << 'b' - 'a';
    return 0;
}
