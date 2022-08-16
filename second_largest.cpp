#include <iostream>
using namespace std;
int secondLargest(int *arr, int n)
{

    int largest = 0;
    int secL = -1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            secL = largest;
            largest = i;
        }

        else if (arr[i] != arr[largest])
        {
            if (secL == -1 || arr[i] > arr[secL])
            {
                secL = i;
                        }
        }
    }
    return secL;
}
int main()
{

    int arr[] = {13, 13, 13, 6, 9, 5, 2, 11,15};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << secondLargest(arr, n);
    return 0;
}
