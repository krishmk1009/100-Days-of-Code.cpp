#include <iostream>
using namespace std;

int Kadane(int arr[], int n)
{


//this will check the current sum untill we get the current sum below zero
    int currSum = 0;


    //this will for final ans;
    int MaxSum = 0;

    for (int i = 0; i < n; i++)
    {

        //assign the value to current sum
        currSum += arr[i];

        if (currSum > MaxSum)
        {
            MaxSum = currSum;
        }

        if (currSum < 0)
        {

            //because is current sum is going below zero then it will not contribute anything in next sum
            currSum = 0;
        }
    }

    return MaxSum;
}
int main()
{

    int arr[] = {5, -2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << Kadane(arr, n);
    return 0;
}
