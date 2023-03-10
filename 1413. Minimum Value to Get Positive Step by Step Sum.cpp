class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int ans = 1;
        vector<int>pref;
        int prefix=0;
        for(int i=0;i<nums.size() ; i++){
            prefix+= nums[i];
            pref.push_back(prefix);

        }
        int mini = INT_MAX;
        for(auto x:pref){
            mini = min(x , mini);
        }

        if(mini <0){
            return -(mini*1)+1;
        }

        return ans;
    }
};
