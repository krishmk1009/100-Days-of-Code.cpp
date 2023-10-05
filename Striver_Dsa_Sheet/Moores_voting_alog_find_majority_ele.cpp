class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate ;
        int count = 0;
        int n  = nums.size();

        for(int i = 0;i<nums.size() ; i++){

            if(count == 0){
                count =1;
                candidate = nums[i];
            }

           else if(candidate == nums[i]) count++;
            else count--;
        }

        int ct = 0;

        for(auto a:nums){
            if(candidate == a) ct++;
        }

        if(ct > (n/2)) return candidate;

        return -1;
    }
};
