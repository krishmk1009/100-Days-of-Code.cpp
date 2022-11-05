class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int len = nums.size();
        vector<int>even;
        vector<int>odd;
         vector<int>ans;

         for(int i = 0 ; i<nums.size() ;i++){
             if(nums[i]%2==0){
                 even.push_back(nums[i]);
             }
             else{
                 odd.push_back(nums[i]);
             }
         }
            int j =0 , k=0;
         for(int i = 0 ; i<even.size();i++){
             ans.push_back(even[j++]);
             ans.push_back(odd[k++]);

         }


      return ans;
    }
};
