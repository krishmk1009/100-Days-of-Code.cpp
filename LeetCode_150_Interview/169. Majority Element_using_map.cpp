169. Majority Element
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
       

        for(auto it:nums){
            mp[it]++;
        }
int n=nums.size()/2;
        for(auto it=mp.begin() ; it!=mp.end() ; it++){
            if(it->second >n ){
                return it->first;
            }
        }

        return 0;
    }
};
