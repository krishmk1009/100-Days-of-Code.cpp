class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       
        int ans = 0;

        for(int i =0;i<nums.size() ; i++){
            
            int j =i;
            int sum=0;
            for(;j<nums.size() ; j++){
                
                    sum+= nums[j];
                  

                    if(sum == k){
                        ans++;
                    }
            }
        }
        return ans;
    }
};
