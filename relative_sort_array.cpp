class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        

        unordered_map<int,int> mp;
        vector<int>ans;
        for(int i=0;i<arr1.size() ;i++){
            mp[arr1[i]]++;
        }

        for(int i=0;i<arr2.size() ;i++){
            if(mp.find(arr2[i]) != mp.end()){
                
                while(mp[arr2[i]] >0){
                    ans.push_back(arr2[i]);
                    mp[arr2[i]]--;
                }
            }
        }

        vector<int>temp;
        for(auto it:mp){
           while(it.second>0){
               temp.push_back(it.first);
               it.second--;
           }
        }
        sort(temp.begin(),temp.end());
        for(auto i:temp){
            ans.push_back(i);
        }

    return ans;
    }
};
