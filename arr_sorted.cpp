#include <iostream>
using namespace std;
bool sorted(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
       
    }
    return true;
}

int main()
{
    int arr[] = {1,1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << sorted(arr, n);
    return 0;
}
