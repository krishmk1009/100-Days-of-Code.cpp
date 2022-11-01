class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<int>ans;
       if(nums.size() ==1){
           return nums;
       }
        
        int sumNums = 0;
        
        for(int i = 0 ; i<nums.size() ; i++){            
            sumNums+=  nums[i];
        }
        int tempSum = 0;
        for(int i = nums.size()-1;i>=0 ; i--){
            
            
            if(tempSum>sumNums){
                
                break;
            }
            
            tempSum += nums[i];
            sumNums -= nums[i];
            ans.push_back(nums[i]);
        }
        
        return ans;
        
    }
};
