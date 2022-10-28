class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0 ; 
        if(nums.size() == 1 && nums[0] ==0){
            return 0;
        }
        sort(nums.begin() , nums.end());
        
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i] ==0){
                continue;
            }
            
            int x=nums[i];
            
            for(int j = 0 ;j<nums.size() ; j++){
                nums[j] -= x;
            }
            
            count++;
            
        }
        return count;
    }
};
