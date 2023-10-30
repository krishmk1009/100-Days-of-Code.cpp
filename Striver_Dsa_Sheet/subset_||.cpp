class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // Sort the input to handle duplicates
        vector<vector<int>> result;
        vector<int> subset;
        generateSubset(result, nums, subset, 0);
        return result;
    }

    void generateSubset(vector<vector<int>>& result, const vector<int>& nums,               vector<int>& subset, int index) {
        result.push_back(subset);

        for (int i = index; i < nums.size(); i++) {
            if (i == index || nums[i] != nums[i - 1]) {  // Skip duplicates
                subset.push_back(nums[i]);
                generateSubset(result, nums, subset, i + 1);
                subset.pop_back();
            }
        }
    }
};
