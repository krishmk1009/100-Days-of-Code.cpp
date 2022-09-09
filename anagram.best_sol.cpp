#include <iostream>
using namespace std;

bool anagram(string s1, string s2)
{

    if (s1.length() != s2.length())
    {
        return false;
    }

    int arr[26] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        arr[s1[i]]++;
        arr[s2[i]]--;
    }

  
    for (int i = 0; i < 26; i++)
    {
      
        if (arr[i] != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    string s1 = "sillent";
    string s2 = "listen";

    if (anagram(s1, s2))
    {
        cout << "this is anagram" << endl;
    }
    else
    {
        cout << "this is not anagram" << endl;
    }
    return 0;
}
