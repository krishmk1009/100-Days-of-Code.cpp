300. Longest Increasing Subsequence
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
       return solve(nums,0 , INT_MIN);
    }

    int solve(vector<int>nums,int i ,int prev){
        if(i>=nums.size()) return 0;

        int take =0;
        // for dont take 
        int dontTake = solve(nums , i+1, prev);

        //for take

        if(nums[i] >prev) take = 1+ solve(nums , i+1 , nums[i]);

        return max(take , dontTake);

    }
};
