#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int minimumLen(int *arr, int n, int sum)
{
    int len = INT_MAX;
    int tempLen = 0;

    for (int i = 0; i < n; i++)
    {
        
        int tempSum = 0;

        for (int j = i; j < n; j++)
        {
            tempSum += arr[j];
            if (tempSum > sum)
            {
                tempLen = j - i+1;
                break;
            }
        }

        len = min(tempLen,len);
    }
    return len;
}
int main()
{

    int arr[] = {1, 11, 100, 1, 0, 200, 3, 2, 1, 250};
    int sum = 280;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << minimumLen(arr, n, sum);
    return 0;
}
