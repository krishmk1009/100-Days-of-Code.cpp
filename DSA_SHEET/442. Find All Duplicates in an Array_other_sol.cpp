class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int>freq(n+1,0);
        vector<int>ans;


        for(int i=0;i<nums.size() ;i++){
            int value = nums[i];
            freq[value] ++;
        }

        for(int i=0;i<freq.size() ;i++){
            if(freq[i]==2){
                ans.push_back(i);
            }
        }
    return ans;

    }
};

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int>mp;

        for(auto x:nums){
            if(mp.find(x) == mp.end()){
                mp[x]++;
            }

            else{
                ans.push_back(x);
            }
        }

        return ans;

    }
};
