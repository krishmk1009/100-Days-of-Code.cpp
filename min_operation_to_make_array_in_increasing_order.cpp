class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0;
        
        for(int i= 1 ;i<nums.size();i++){
            
            if(nums[i]<=nums[i-1]){
                int value = nums[i-1]-nums[i]+1+ nums[i];
                count += nums[i-1]-nums[i]+1;
                
                nums[i]=value;
                
            }
        }
        return count;
    }
};
