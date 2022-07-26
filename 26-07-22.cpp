#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i < 8; i++)
    {

        // print no with same value

        for (int j = 0; j < 6; j++)
        {
            cout << i;
        }
        

        // print no greater

        for(int j=0 ; j<1;j++){
            cout<<i+1;
        }
        cout<<endl;
    }

    return 0;
}
