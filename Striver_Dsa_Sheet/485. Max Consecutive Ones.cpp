class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0 , maxCnt = 0;

        for(auto i :nums){
            if(i ==1) maxCnt = max(maxCnt , ++cnt);
            else cnt=0;
        }
        return maxCnt;
    }
};
