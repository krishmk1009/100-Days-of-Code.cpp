class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        
        for(int i = 0 ; i<nums.size();i++){
            int tempSum = 0;
            
            for(int j = 0 ; j<i+1 ; j++){
                tempSum += nums[j];
                    
            }
            ans.push_back(tempSum);
        }
        return ans;
    }
};
