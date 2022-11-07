class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int>mp;
        vector<int>ans;
int len = nums.size();
        for(int i = 0 ; i<nums.size() ; i++){
            for(int j = 0 ; j<nums[i].size() ; j++){
                mp[nums[i][j]]++;
            }
        }
for(auto it=mp.begin()  ; it!=mp.end() ; it++){
    if(it->second ==len ){
        ans.push_back(it->first);
    }
}
return ans;
    }
};
