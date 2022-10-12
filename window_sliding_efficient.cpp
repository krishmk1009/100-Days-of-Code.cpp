#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int windowSlide(int *arr, int n, int k)
{
    int maxSum = 0;

    for (int i = 0; i < k; i++)
    {
        maxSum += arr[i];
    }

    int temp = maxSum;

    for (int i = k; i < n; i++)
    {

        temp = temp - arr[i - k] + arr[i];
        maxSum = max(temp, maxSum);
    }

    return maxSum;
}
int main()
{
    int arr[] = {10, 5, -2, 20, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << windowSlide(arr, n, k);

    return 0;
}
