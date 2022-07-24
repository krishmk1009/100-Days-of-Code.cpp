//
    ****
  ****
****
//

#include <iostream>

using namespace std;

int main()
{
    int n = 4;

    for (int i = 1; i <= 3; i++)
    {

        // printing spacce

        for (int j = n; j >= 1; j--)
        {
            cout << " ";
        }

        n = n / 2;
        // print *
        if (n == 1)
        {
            n = 0;
        }

        for (int j = 1; j <= 4; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
