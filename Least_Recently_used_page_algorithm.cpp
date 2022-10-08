#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int pageFaults(int pages[], int n, int capacity)
{
    unordered_set<int> s;
    unordered_map<int, int> indexes;
    int pageFault = 0;

    for (int i = 0; i < n; i++)
    {
//1st part where we need to fill all the free slots with pages
        if (s.size() < capacity)
        {
            if (s.find(pages[i]) == s.end())
            {
                s.insert(pages[i]);
                pageFault++;
            }

            indexes[pages[i]] = i;
        }

        // 2nd part: if set is full we need to perform lru

        else
        {
            if (s.find(pages[i]) == s.end())
            {
                int lru = INT_MAX, val;

                for (auto it = s.begin(); it != s.end(); it++)
                {
                    if (indexes[*it] < lru)
                    {
                        lru = indexes[*it];
                        val = *it;
                    }
                }

                s.erase(val);
                s.insert(pages[i]);
                pageFault++;
            }
          
          //3rd part : if set is full and page is alredy present in the set then we just need to update its index in hashmap
            indexes[pages[i]] = i;
        }
    }
    return pageFault;
}
int main()
{

    int pages[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
    int n = sizeof(pages) / sizeof(pages[0]);
    int capacity = 4;
    cout << pageFaults(pages, n, capacity);
    return 0;
}
