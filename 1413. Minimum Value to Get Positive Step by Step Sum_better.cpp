class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int ans = 1;
        int mini = INT_MAX;
        int prefix=0;
        for(int i=0;i<nums.size() ; i++){
            prefix+= nums[i];
            
            if(prefix<0){
                mini = min(prefix , mini);
            }

        }
       if(mini<0){
           return -(mini)+1;
       }

       return ans;
    }
};
