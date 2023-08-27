350. Intersection of Two Arrays II
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
vector<int>ans;
        for(auto a:nums1){
            mp[a]++;
        }


        for(auto a:nums2){
            if(mp.find(a) !=mp.end() && mp[a]>0){
                ans.push_back(a);
                mp[a]--;
            }
        }

        return ans;
    }
};
