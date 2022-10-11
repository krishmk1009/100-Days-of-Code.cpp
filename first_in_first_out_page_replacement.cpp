#include <iostream>
#include <queue>
#include <bits/stdc++.h>

using namespace std;

bool hasElement(deque<int> slot, int key)
{
    for (auto it = slot.cbegin(); it != slot.cend(); it++)
    {
        if (key == *it)
        {
            return true;
        }
    }
    return false;
}

int calcFault(int *pages, int capacity, int n)
{
    deque<int> slot;
    int pageFault = 0;

    if (slot.size() < capacity)
    {
        for (int i = 0; i < n; i++)
        {
            if (slot.size() < capacity)
            {

                if (!hasElement(slot, pages[i]))
                {
                    slot.push_back(pages[i]);
                    pageFault++;
                }
            }

            else
            {
                if (!hasElement(slot, pages[i]))
                {
                    slot.pop_front();
                    slot.push_back(pages[i]);
                    pageFault++;
                }
            }
        }
    }
    return pageFault;
}

int main()
{

    int pages[] = { 7,0,1,2,0,3,0,4,2,3,0,3,2,1,2,0,1,7,0,1};
    int capacity = 3;
    int n = sizeof(pages) / sizeof(pages[0]);
    cout << calcFault(pages, capacity, n);
    return 0;
}
