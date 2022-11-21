class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans;
         vector<int> push1;
         vector<int> push2;

        for(int i = 0 ; i<nums1.size() ; i++){
          int val = nums1[i];

          auto it = find(nums2.begin() , nums2.end() , val);
            if(it==nums2.end()){
                auto itr = find(push1.begin() , push1.end() , val);
                if(itr==push1.end()){
                    push1.push_back(val);   
                }

              
          }
        }


        for(int i = 0 ; i<nums2.size() ; i++){
            int val = nums2[i];
             auto it = find(nums1.begin() , nums1.end() , val);
          if(it==nums1.end()){
              auto itr = find(push2.begin() , push2.end() , val);
              if(itr==push2.end()){
                    push2.push_back(val);
              }
              
          } 
        }


ans.push_back(push1);
ans.push_back(push2);
        return ans;
    }
};
