#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void solve(vector<int> &inputArr, int n, int k)
{
    vector<int> ans;

    for (int i = 0; i < n - k+1; i++)
    {
        bool flag = false;
        for (int j = i; j < i + k; j++)
        {
            if (inputArr[j] < 0)
            {
                ans.push_back(inputArr[j]);
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            ans.push_back(0);
        }
    }

    for (auto x : ans)
    {
        cout << x << " ";
    }
}
int main()
{

    vector<int> inputArr = {5, -3, 2, 3, -4};
    int k = 2;
    int n = inputArr.size();

    solve(inputArr, n, k);
    return 0;
}
