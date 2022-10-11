#include <iostream>
using namespace std;
int summ(int arr[3][2])
{
    int ans = 0;

    for (int i = 0; i < 3; i++)
    {
        int tempSum = 0;
        for (int j = 0; j < 2; j++)
        {
            tempSum += arr[i][j];
        }
        cout << tempSum << endl;
        ans += tempSum;
    }

    return ans;
}
int main()
{

    int arr[3][2] = {{5, 4}, {6, 70}, {9, 3}};
    cout << summ(arr);
    return 0;
}
