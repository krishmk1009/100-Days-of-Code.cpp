#include <iostream>
#include <vector>
using namespace std;

void removeALL(vector<int> &arr, int element)
{

    vector<int>::iterator it;
    for (auto it = arr.begin(); it != arr.end(); it++)
    {

        if (*it == element)
        {
    arr.erase(it);
            it--; 
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    vector<int> arr = {2,3,9,3,6,9,3};
    int element = 3;
    int n = arr.size();
    removeALL(arr, element);

    return 0;
}
