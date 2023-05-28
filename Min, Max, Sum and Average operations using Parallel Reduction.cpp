#include <iostream>
#include <vector>
#include <omp.h>

using namespace std;

int parallerMini(vector<int> &arr)
{

    int mini = arr[0];

#pragma omp parallel for reduction(min : mini)

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }

    return mini;
}

int parellerMax(vector<int> &arr)
{

    int maxi = arr[0];

#pragma omp parallel for reduction(max : maxi)

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    return maxi;
}
int parallelSum(vector<int> &arr)
{

    int sum = 0;

#pragma omp parallel for reduction(+ : sum)

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[0];
    }

    return sum;
}
int parallerAvg(vector<int> &arr)
{

    int sum = parallelSum(arr);

    double avg = static_cast<double>(sum) / arr.size();
    return avg;
}

int main()
{

    int n = 0;
    cout << "enter the element ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << "enter the no;" << endl;
        cin >> arr[i];
    }

    int miniAns = parallerMini(arr);
    int maxAns = parellerMax(arr);
    int totalSum = parallelSum(arr);
    int avg = parallerAvg(arr);

    cout << miniAns;
    cout << maxAns;
    cout << totalSum;
    cout << avg;

    return 0;
}


// g++ -fopenmp main.cpp -o main
//  ./main
