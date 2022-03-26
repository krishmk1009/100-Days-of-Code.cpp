#include <iostream>
using namespace std;
void print(int *arr , int size){
    cout<<"the size of array is "<<size<<endl;

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool linearSearch(int *arr, int size, int key)
{

    print(arr,size);
    if (size == 0)
    {
        return false;
    }
    // recursion case
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remaining = linearSearch(arr + 1, size - 1, key);
        return remaining;
    }
}

int main()
{
    int arr[] = {4, 2, 4, 5, 6, 7};

    bool ans = linearSearch(arr, 6, 5);

    if (ans)
    {
        cout << "key is present";
    }
    else
    {
        cout << "key is not present";
    }

    return 0;
}