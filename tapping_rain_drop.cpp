#include <iostream>
using namespace std;

int rainCount(int *arr, int n)
{
    int ans = 0;

    for (int i = 1; i < n; i++)
    {

        // check current with prev and next position
        if (arr[i - 1] > arr[i] && arr[i + 1] > arr[i])
        {

            // now check for 3 condition
            // 1st - if next > prev;
            
            if (arr[i + 1] > arr[i - 1])
            {
                int temp = arr[i - 1] - arr[i];
                ans += temp;
            }
            // 2nd - if prev > next;
            else if (arr[i - 1] > arr[i + 1])
            {
                int temp = arr[i + 1] - arr[i];
                ans += temp;
            }

            // 3rd - if prev == next;
            else
            {
                int temp = arr[i + 1] - arr[i];
                ans += temp;
            }
        }
    }
    return ans;
}

int main()
{

    int arr[] = {5, 0, 6, 2, 7};

    int n = 5;

    cout << rainCount(arr, n);
    return 0;
}
