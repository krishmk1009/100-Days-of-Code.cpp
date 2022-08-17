#include <iostream>
#include <limits.h>
using namespace std;
int maxDiff(int *arr, int n)
{
    int diff = INT_MIN;

    for (int i = 1; i < n; i++)
    {
        for (int j = i-1; j >= 0; j--)
        {
            if (arr[i] - arr[j] > diff)
            {
                diff = arr[i] - arr[j];
            }
        }
    }
    return diff;
}
int main()
{

    int arr[] = {2,3,10,8,6,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxDiff(arr, n);
    return 0;
}
