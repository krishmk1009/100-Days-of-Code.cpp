#include <iostream>
using namespace std;
const int CHAR = 256;
int leftMostChar(string str)
{

    int count[CHAR] = {0};

    for (int i = str.length()-1; i >0; i--)
    {
        count[str[i]]++;
    }

    for (int i = str.length()-1; i >0; i--)
    {
       if(count[str[i]]>1)return i;
    }

    return -1;
}
int main()
{
    string str = "mkrushhna";
    cout << leftMostChar(str) << endl;
    return 0;
}
