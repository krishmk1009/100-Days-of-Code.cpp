#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

string frequency(vector<int> v)
{
    sort(v.begin(), v.end());
    int n = v.size();

    int prev = 0;

    int max = 0;

    for (int i = 0; i < n; i++)

    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (v[i] == v[i + 1])
            {
                continue;
            }
            else
            {

                if (v[i] == v[j])
                {
                    count++;
                }
            }
        }
        if (count == max)
        {
            prev = max;
        }

        if ((count > prev && count > max))
        {
            prev = max;
            max = count;
        }

        
        cout << "count " << count << endl;
    }
    cout << "max " << max << endl;
    cout << "prev " << prev << endl;

    if (max > prev)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}
int main()
{

    vector<int> v;
    v = {1,2,3,2,3,3};

    cout << frequency(v);
    return 0;
}
