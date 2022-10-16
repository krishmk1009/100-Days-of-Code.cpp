class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans ; 
        
        for(int i =  0;i<nums.size() ; i++){
            
            int ind = index[i];
            int value = nums[i];
            
            auto it = ans.begin() + ind;
            
            ans.insert(it, value);
            
            
        }
        
        return ans;
    }
};
