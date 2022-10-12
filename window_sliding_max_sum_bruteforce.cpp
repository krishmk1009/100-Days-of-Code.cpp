#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int windowSlide(int *arr, int n, int k)
{
    int maxSum = 0;

    for (int i = 0; i + k - 1 < n; i++)
    {
        int temp = 0;

        for (int j = i; j < i + k; j++)
        {
            temp += arr[j];
        }

        maxSum = max(maxSum, temp);
        cout << temp << endl;
        ;
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
