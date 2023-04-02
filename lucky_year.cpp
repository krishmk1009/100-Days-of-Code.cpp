#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findYear(int n, vector<int> &d) {
    unordered_map<int, int> mp;

    for (auto it : d) {
        mp[it]++;
    }

    int ans = n;
    
    while (true) {
        int temp = ans;
        bool flag = true;

        while (temp != 0) {
            int digit = temp % 10;
            if (mp.find(digit) != mp.end()) {
                flag = false;
                break;
            }
            temp = temp / 10;
        }

        if (flag) {
            return ans;
        }
        ans++;
    }
    return -1;
}

int main() {
    int n = 123;
    vector<int> d = {1,2,3};
    int ans = findYear(n, d);
    cout << ans << endl;
    return 0;
}
