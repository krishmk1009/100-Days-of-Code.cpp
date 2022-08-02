
#include <iostream>
#include <limits.h>
using namespace std;

int profit(int arr[], int n)
{
    int profit = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            int temp = (arr[i + 1] - arr[i]);
            profit += temp;
        }
    }
    return profit;
}

int main()
{

    int arr[] = {1, 5, 3, 8, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<profit(arr, n);

    return 0;
}
