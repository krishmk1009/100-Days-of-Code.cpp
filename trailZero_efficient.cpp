#include <iostream>
using namespace std;

int trailZero(int n)
{
    int res = 0;

    for (int i = 5; i <= n; i = i * 5)
    {
        res = res + (n / i);
    }

    return res;
}
int main()
{

    cout << trailZero(251);
    return 0;
}

//time comple = O(logN)
