#include <iostream>
#include <algorithm>
using namespace std;
bool anagram(string s1, string s2)
{

    if (s1.length() != s2.length())
    {
        return false;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return (s1 == s2);
}
int main()
{

    string s1 = "silent";
    
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
