560. Subarray Sum Equals K
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       
        int ans = 0;

      unordered_map<int,int>mp;
      int sum=0;
      mp[sum]=1;

      for(auto x:nums){
          sum+=x;
          int val = sum - k;

          if(mp.find(val)!=mp.end()){
              
              ans+= mp[val];
          }
          mp[sum]++;
      }
        return ans;
    }
};
