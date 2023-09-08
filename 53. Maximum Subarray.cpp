class Solution {
public:
    int maxSubArray(vector<int>& nums) {

       
        int curr=0;
        int finalSum = INT_MIN;

        for(auto i:nums){
            curr+=i;

            if(curr>finalSum){
                finalSum = curr;
            }

            if(curr<0){
                curr =0;
            }
        }

        return finalSum;
    }
};
