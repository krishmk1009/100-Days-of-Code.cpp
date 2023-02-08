class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int value = original;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==value){
                value = value*2;

                
                }

                for(int j=0;j<nums.size() ; j++){
                    if(nums[j] == value){
                        value = value*2;
                    }
            }
        }

        return value;
    }
};
