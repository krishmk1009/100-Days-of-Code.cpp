class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        
      int firstSmall = INT_MAX;
    int secondSmall = INT_MAX;
        
        for(int i = 0 ; i<nums.size() ; i++){
            if(firstSmall > nums[i]){
                secondSmall = firstSmall;
                firstSmall = nums[i];
             
            }
            else if(nums[i] < secondSmall){
                secondSmall  = nums[i];
            }
        }
        
          int first = INT_MIN;
        int second = INT_MIN;
        
    for (int i = 0; i < nums.size() ; i ++)
    {
        if (nums[i] > first)
        {
            
            second = first;
            first = nums[i];
        }
        else if (nums[i] > second)
        {
            
            second = nums[i];
        }
        
    }
        return((first * second) - (firstSmall * secondSmall));
    }
};
