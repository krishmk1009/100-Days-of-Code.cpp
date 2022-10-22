class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        
        // int ans = 0 ; 
        sort(nums.begin() , nums.end());
        
        int first = nums[0]*nums[1];
        int second = nums[nums.size()-1]* nums[nums.size()-2];
        
        return second-first;
    }
};
