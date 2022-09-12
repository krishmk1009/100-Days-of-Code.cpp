#include <iostream>
using namespace std;

int leftMostChar(string str)
{

    for (int i = 0; i < str.length(); i++)
    {
        bool isRepetative = false;
        for (int j = 0; j < str.length(); j++)
        {
            if ( i!=j && str[i] == str[j])
            {
                isRepetative = true;
                break;
            }
        }
        if (!isRepetative)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    string str = "abbcca";
    cout << leftMostChar(str) << endl;

    return 0;
}
