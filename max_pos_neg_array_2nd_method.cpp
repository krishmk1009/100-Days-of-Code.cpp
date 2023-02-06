class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos= 0;
        int neg =0;
        int index = -1;

        for(int i=0;i<nums.size();i++){
           
             if(nums[i]>0){
                index=i;
                 pos = nums.size()-index;
                break;
            }
            if(nums[i]<0){
                neg++;
            }
           


        }
       

        return max(pos,neg);
    }
};
