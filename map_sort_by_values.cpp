#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>> v1;
    // vector<pair<int, int>> v1;
    vector<int> ans;
    map<int, int>
        mp;
    mp[4] = 1;
    mp[3] = 9;
    mp[5] = 9;
    mp[12] = 7;
    mp[7] = 6;

    map<int, int>::iterator it;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        v1.push_back(make_pair(it->second, it->first));
    }
    sort(v1.begin(), v1.end());

    
    vector<pair<int, int>>::iterator vIt;

    for (auto vIt = v1.begin(); vIt != v1.end(); vIt++)
    {

        cout << "current: " << vIt->first << " ";

        cout << "next: " << (vIt + 1)->first << " ";
        cout << endl;
        if (vIt->first == (vIt + 1)->first)
        {
            if (vIt->second < (vIt + 1)->second)
            {
                ans.push_back((vIt + 1)->second);
                ans.push_back(vIt->second);
            }
            else
            {
                ans.push_back(vIt->second);
                ans.push_back((vIt + 1)->second);
            }
            vIt = vIt + 2;

            if (vIt == v1.end())
            {
                break;
            }
        }
        else
        {
            ans.push_back(vIt->second);
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
