class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int ans = 0;

        mp[0]++;

        int sum = 0;
        for(auto it:nums){
            sum+=it;

            if(mp[(sum%k+k)%k]>0){
                ans+=mp[(sum%k+k)%k];
            }
            mp[(sum%k+k)%k]++;
        }
        return ans;
    }
};
