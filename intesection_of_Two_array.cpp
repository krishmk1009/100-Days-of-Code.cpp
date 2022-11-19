class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> store;
        vector<int>ans;

        for(int i =0;i<nums1.size() ; i++){
            store.insert(nums1[i]);
        }
       

       for(int i = 0 ; i<nums2.size() ; i++){
            if(store.find(nums2[i]) != store.end()){
                if(find(ans.begin() , ans.end() , nums2[i]) == ans.end()){
                      ans.push_back(nums2[i]);
                }
               
              
            }
       }
       return ans;
    }
};
