class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;

        for(int i = 0 ; i<nums1.size() ; i++){
            int num = nums1[i];
           auto it = find(nums2.begin() , nums2.end(),num);
           int pos = it-nums2.begin();
           int val = -1;

           for(int j = pos+1; j<nums2.size() ; j++){
               if(nums2[j]>num){
                   val = nums2[j];
                   break;
               }
           }

           ans.push_back(val);
        }
        return ans;
    }
};
