// O(n) space , O(n) time

#include <iostream>
#include <vector>
using namespace std;

void ans(vector<int> nums)
{
    vector<int> ans;
    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            count++;
        }

        else
        {
            ans.push_back(nums[i]);
        }
    }

    for (int i = 0; i < count; i++)
    {
        ans.push_back(0);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{

    vector<int> nums = {1, 0, 6, 0, 1, 0, 9};
    ans(nums);
    return 0;
}
