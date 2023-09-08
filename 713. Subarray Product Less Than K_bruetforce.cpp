subarry product less than K bruteforce :

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans =0;

        for(int i =0;i<nums.size() ;i++){
            double  prod = 1;
            for(int j = i ; j<nums.size() ; j++){
                prod *=nums[j];

                if(prod <k){
                    ans++;
                }
            }
        }
        return ans;
    }
};
