class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < n - 1; j++) {
                nums[j] = (nums[j] + nums[j + 1]) % 10;
            }
            n--;
        }
        return nums[0];
    }
};
