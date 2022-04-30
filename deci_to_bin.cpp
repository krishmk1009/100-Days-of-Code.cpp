// #include <bits/stdc++.h>
// using namespace std;
// int conversion(int n)
// {
//     int ans  = 0;
//     int i = 0;
//     while(n != 0 ) {

//         int bit  = n & 1;

//         ans = (bit * pow(10, i) ) + ans;

//         n = n >> 1;
//         i++;

//     }

//     return ans;
// }

// int main()
// {

//     cout << conversion(12);
//     return 0;
// }

#include<iostream>
#include<math.h>
using namespace std;


int main() {

    int n;
    cin >> n;


    int ans  = 0;
    int i = 0;
    while(n != 0 ) {

        int bit  = n & 1;

        ans = (bit * pow(10, i) ) + ans;

        n = n >> 1;
        i++;

    }

    cout<<" Answer is " << ans << endl;
    return 0;
}
