#include <iostream>
using namespace std;

int reverse(int n)
{

    int ans = 0;
    int rem = 0;

    while (n != 0)
    {
        rem = n % 10;
        ans = ans * 10 + rem;
        n /= 10;
    }

    return ans;
}
int main()
{

    int n = 5632;
    cout << reverse(n);
    return 0;
}
