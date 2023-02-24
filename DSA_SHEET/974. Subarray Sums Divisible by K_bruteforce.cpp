class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        long long ans = 0;


        for(int i=0; i<nums.size();i++){

            long long currentSum = 0;
            for(int j=i ; j<nums.size() ; j++){
                currentSum+= nums[j];
                if(currentSum %k ==0){
                    ans++;
                }
            }

        }
        return ans;
    }
};
