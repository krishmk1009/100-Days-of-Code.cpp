class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0 ;
        int r=0;
        int ans = 0;
        int count_0=0;
        for(;r<nums.size() ;r++){

            if(nums[r] ==0) count_0++;

            for(; count_0>1 ; l++){
                if(nums[l] ==0) count_0--;
            }

            ans = max(ans , r-l+1);
    
        }

        return ans-1;
    }

};
