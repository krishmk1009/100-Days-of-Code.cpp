#include <iostream>
using namespace std;

void SelectionSort(int *arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {

        int minValue = i;
        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] < arr[minValue])
            {
                minValue = j;
            }
        }
        swap(arr[minValue], arr[i]);
    }
}

int highestSum(int *arr, int n)
{
    int sum = 0;

    if (arr[n - 1] > 0)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] > 0)
            {
                sum += arr[i];
            }
            else
            {
                break;
            }
        }
    }

    else if (arr[n - 1] < 0)
    {
        sum = arr[n - 1];
    }

    return sum;
}

int main()
{

    int arr[] = {5, -2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    SelectionSort(arr, n);
    cout<<highestSum(arr, n);
    return 0;
}
