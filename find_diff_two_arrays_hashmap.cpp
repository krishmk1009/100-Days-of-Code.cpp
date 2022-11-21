class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans;
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;

        for(int i=0 ; i<nums1.size() ;i++){
            mp1[nums1[i]] ++;
        }
        for(int i=0 ; i<nums2.size() ;i++){
            mp2[nums2[i]] ++;
        }

        vector<int>  push1;
        vector<int>push2;


        for(auto it= mp1.begin() ;it!=mp1.end() ;it++){

            int val = it->first;

            if(mp2.find(val)==mp2.end()){
                push1.push_back(val);
               
                
            }
        }

         for(auto it= mp2.begin() ;it!=mp2.end() ;it++){

            int val = it->first;

            if(mp1.find(val)==mp1.end()){
                push2.push_back(val);
                
            }
        }
        ans.push_back(push1);
        ans.push_back(push2);
        return ans;
    }
};
