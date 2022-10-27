class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int ans = 0;
        unordered_map<int,int> mp;
        
        for(int i = 0 ; i<nums.size() ; i++){
            if(mp.find(nums[i]) == mp.end()){
                mp[nums[i]] = 1;
            }
            else{
                mp[nums[i]] ++;
            }
        }
        
        unordered_map<int,int> :: iterator it;
        
        for(auto it = mp.begin() ; it!= mp.end() ; it++){
if(it->second == 1){
    ans+= it->first;
}
        }
        return ans;
    }
};
