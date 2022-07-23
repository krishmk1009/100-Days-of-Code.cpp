#include <iostream>
using namespace std;

int main()
{


    /*printing 
    ****
    ***3
    **33
    *333
    3333
    */

    for (int i = 4; i >= 0; i--)
    {

        // printing *
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        // printing #


        for (int j = 4; j > i; j--)
        {
            cout << "3";
        }

        cout << endl;
    }

    return 0;
}
