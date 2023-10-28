//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ans ;
        
        vector<vector<int>> result ;
        vector<int>subset;
        
        generateSubset(arr , result , subset , 0);
        
        for(int i =0 ; i<result.size() ;i++){
            
            int sum = accumulate(result[i].begin() , result[i].end() , 0);
            ans.push_back(sum);
        }
        
        return ans;
        
    }
    
    void generateSubset(vector<int>& arr , vector<vector<int>>& result ,vector<int> subset , int index){
        
        result.push_back(subset);
        
        for(int i = index;i<arr.size() ; i++){
            subset.push_back(arr[i]);
            generateSubset(arr , result , subset , i+1);
            subset.pop_back();
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
