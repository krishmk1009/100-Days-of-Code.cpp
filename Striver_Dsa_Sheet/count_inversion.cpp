#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
    // Write your code here.
    long long ans = 0;

    for(int i = 0;i<n ; i++){
        int temp = arr[i];

        for(int j = i+1 ; j<n;j++){
            if(temp > arr[j]){
                ans++;
            }
        }
    }

    return ans;
}
