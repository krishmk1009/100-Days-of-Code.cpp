#include <iostream>
using namespace std;

int gcd(int a, int b)
{

    int num = min(a, b);
    for (int i = num; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
    }

    return 1;
}
int main()
{

    cout<<gcd(18,24);
    return 0;
}

//time complexity -- O(min(a,b))
