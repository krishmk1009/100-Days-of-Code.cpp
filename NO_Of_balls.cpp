#include <iostream>
using namespace std;
int numberOfBalls(int arr[], int n)
{
    int ans = 0;

    int index = 1;
    for (int i = 0; i < n; i++)
    {
        int temp_sq = index * index;
        ans += temp_sq - arr[i];
        index++;
    }

    return ans;
}

int main()
{

    int arr[] = {0, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = numberOfBalls(arr, n);
    cout << ans;

    return 0;
}
