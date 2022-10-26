class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size()/2;
       sort(nums.begin() , nums.end());
        int ans;
        for(int i = 0 ; i<nums.size()  ;i++){
            if(nums[i] ==nums[i+1]){
                ans = nums[i];
                break;
            }
        }
        return ans;
        
    }
};
