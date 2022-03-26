#include <iostream>
using namespace std;

int findSum(int *arr, int size)
{

    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
        return arr[0];
    // recursion case ..

    int remaining = findSum(arr + 1, size - 1);
    int ans = arr[0] + remaining;

    return ans;
}

int main()
{
    int arr[] = {4, 2, 4, 5, 6, 7};

    cout << findSum(arr, 6);
    return 0;
}