class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int ans = -1;

        unordered_map<int,int>mp;

        for(auto x:nums){
            mp[x]++;
        }

        for(auto x:nums){
            if(x>0 && mp.find((x*-1))!=mp.end()){
                ans = max(ans,x);
            }
        }

        return ans;
    }
};
