class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size()/2;
        
        unordered_map<int,int> mp;
            
        for(int i = 0 ; i<nums.size() ; i++){
            if(mp.find(nums[i]) == mp.end()){
                mp[nums[i]] = 1;
                
            }
            else{
                mp[nums[i]]++;
            }
        }
        
        unordered_map<int,int> :: iterator it;
        int ans;
        for(auto it= mp.begin() ; it!= mp.end() ; it++){
            if(it->second == n){
                ans = it->first;
                break;
            }
            
        }
        return ans;
        
    }
};
