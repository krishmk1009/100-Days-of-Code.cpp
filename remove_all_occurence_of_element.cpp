#include <iostream>
#include <vector>
using namespace std;

vector<int> removeALL(vector<int> arr, int element)
{
    int n = arr.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != element)
        {
            ans.push_back(arr[i]);
        }
    }

    return ans;
}
int main()
{
    vector<int> arr = {4,6,9,3,9,23,6,9};
    int element = 9;
    int n = arr.size();
    vector<int> ans = removeALL(arr, element);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}
