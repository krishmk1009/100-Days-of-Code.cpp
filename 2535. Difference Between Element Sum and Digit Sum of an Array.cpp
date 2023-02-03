class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int intial_sum = 0;
        int first_sum = accumulate(nums.begin() , nums.end() ,intial_sum );
        int secondSum=0;

        for(int i = 0 ; i<nums.size() ; i++){
            int tempNum = nums[i];
            int tempSum = 0;

            while(tempNum>0){
                int digit = tempNum%10;
                tempSum+=digit;
                tempNum = tempNum/10;

            }

        secondSum+= tempSum;
        }
        return abs(first_sum - secondSum);
    }
};
