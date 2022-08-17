#include <iostream>
using namespace std;
void removeCopy(int *arr, int n)
{
    int temp[n];
    temp[0] = arr[0];
    int size = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != temp[size - 1])
        {
            temp[size++] = arr[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout<<temp[i]<<" ";
    }
    
}
int main()
{

    int arr[] = {1, 1, 2, 2, 2, 3, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    removeCopy(arr, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}
