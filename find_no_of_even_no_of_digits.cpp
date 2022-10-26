class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        
        for(int i = 0;i<nums.size(); i++){
            int num = nums[i];
            int digitCount = 0;
            while(num!=0){
                num /=10;
                digitCount++;
            }
            if(digitCount %2==0){
                ans++;
            }
        }
        return ans;
    }
};
