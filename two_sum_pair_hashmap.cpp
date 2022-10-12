class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> indexes ;
        for(int  i =0 ; i<nums.size() ; i++){
            if(indexes.find(target-nums[i]) != indexes.end()){
                return {indexes[target-nums[i]] , i};
            }
            
            indexes[nums[i] ] = i;
        }
    
        return {};
        
    }
};
