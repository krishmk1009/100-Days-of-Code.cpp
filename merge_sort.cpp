#include <iostream>
using namespace std;

void merge(int *arr, int start, int end)
{

    int mid = (start + end) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayIndex = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int start, int end)
{
//base condition;
    if (start >= end)
    {
        return;
    }

    int mid = (start + end) / 2;
    // sort for left
    mergeSort(arr, start, mid);

    // sort for right;
    mergeSort(arr, mid + 1, end);

    // merge both arrays
    merge(arr, start, end);
}
int main()
{

    int arr[] = {3, 7, 0, 1, 5, 8, 3, 2, 34, 66, 87, 23, 12};

    // int n = sizeof(arr) / sizeof(arr[0]);
    int n=13;

    int start = 0;
    int end = n - 1;

    mergeSort(arr, start, end);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
