// basic program for first fit algorithm;

#include <iostream>
using namespace std;

void firstFit(int *freeSize, int nFree, int *processSize, int totalProcess)
{

    int allocation[totalProcess] = {0};

    for (int i = 0; i < totalProcess; i++)
    {
        for (int j = 0; j < nFree; j++)
        {
            if (freeSize[j] >= processSize[i])
            {
                allocation[i] = j;
                freeSize[j] -= processSize[i];
                break;
            }
            else
            {
                allocation[i] = -1;
            }
        }
    }

    // print the free remaining space after allocation
    cout << "The free space after process allocation: " << endl;
    for (int i = 0; i < nFree; i++)
    {
        cout << freeSize[i] << "kb ";
    }
    cout << endl;
    cout << endl;
    cout <<"--Allocation are as following--"<<endl;

    for (int i = 0; i < totalProcess; i++)
    {
        if (allocation[i] == -1)
        {
            cout << processSize[i] << "kb cannot be allocated ,No free space available." << endl;
        }
        else
        {

            cout << processSize[i] << "kb alocated at: " << allocation[i] << "block " << endl;
        }
    }
}
int main()
{

    int freeSize[] = {50, 30, 100, 70};
    int nFree = sizeof(freeSize) / sizeof(freeSize[0]);

    int processSize[] = {60, 40, 20, 90};
    int totalProcess = sizeof(processSize) / sizeof(processSize[0]);

    firstFit(freeSize, nFree, processSize, totalProcess);

    return 0;
}
