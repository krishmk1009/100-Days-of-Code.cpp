#include <iostream>
using namespace std;
int removeCopy(int *arr, int n)
{

    int size = 1;
    for (int i = 1; i < n; i++)
    {

        if (arr[i] != arr[i - 1])
        {
            arr[size++] = arr[i];
        }
    }
    return size;
}
int main()
{

    int arr[] = {4,6,9,9,13,13,13,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<removeCopy(arr, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}
