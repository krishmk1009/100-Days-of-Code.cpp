void convertToWave(vector<int>& arr, int n){
    // code here
    sort(arr.begin(), arr.end());

    if(n%2 == 1){
        solve(arr, n-1);
    }
    else{
        solve(arr, n);
    }
}

void solve(vector<int>& arr, int condition){
    int i = 0;
    while(i < condition){
        swap(arr[i], arr[i+1]);
        i += 2;
    }
}
