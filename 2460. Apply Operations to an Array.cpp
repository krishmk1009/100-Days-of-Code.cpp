class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size()-1;
        vector<int>ans;
        int countZero = 0;
        for(int i=0;i<n ; i++){
            if(nums[i] ==0){
                
            }
            if(nums[i] == nums[i+1]){
                nums[i]*=2;
                nums[i+1]=0;
               
            }
        }
        int i=0;
        for(auto it:nums){
            if(it!=0){
                ans.push_back(it);
            }
            else{
                countZero++;
            }
        }

        while(countZero!=0){
            ans.push_back(0);
            countZero--;
        }
        return ans;
    }
};
