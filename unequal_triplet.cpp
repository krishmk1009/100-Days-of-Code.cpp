class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            int first = nums[i];
            int second = 0;
            int third = 0;
            for(int j = i+1; j < nums.size(); j++) {
                if(j > i && first != nums[j]) {
                    second = nums[j];
                    for(int k = j+1; k < nums.size(); k++) {
                        if(k > j && j > i && second != first && first != nums[k] && nums[k] != second) {
                            ans++;
                        }
                    }
                }
            }
        }
        return ans;
    }
};
