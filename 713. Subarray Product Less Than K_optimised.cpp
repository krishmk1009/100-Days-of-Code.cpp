class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
          if (k <= 1) {
            // If k is less than or equal to 1, no subarray can have a product less than k.
            return 0;
        }
    int ans = 0;
    int l=0,r=0 ;
    long prod = 1;

    for(;r<nums.size() ; r++){

        prod *=nums[r];

        for(; prod>=k ; l++){
            prod/=nums[l];
        }

        ans+=(r-l+1);
    }

    return ans;

    }
};
