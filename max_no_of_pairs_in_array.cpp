class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        
        vector<int>answer ;
        int pairCount = 0;
        int leftOver=0;
        
        for(int  i = 0 ; i<nums.size() ; i++){
            
            if(nums[i] == -1){
                continue;
            }
            
            for(int j = i+1 ; j<nums.size() ; j++){
                if(nums[j] == -1){
                    continue;
                }
                
                if(nums[i] == nums[j]){
                    pairCount++;
                    nums[i] = -1;
                    nums[j] = -1;
                }
                
            }
     
        }
        for(int i = 0;i<nums.size() ; i++){
                if(nums[i] != -1){
                    leftOver++;
                }
            }
        
        answer.push_back(pairCount);
        answer.push_back(leftOver);
        return answer;
    }
};
