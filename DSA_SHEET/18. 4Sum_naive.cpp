class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
           vector<vector<int>>ans;
           set<vector<int>> st;
            sort(nums.begin() , nums.end());

           for(int i=0;i<n-3 ; i++){
               int j = i+1;

               for(;j<n-2 ;j++){
                   int k =j+1;
                   for(;k<n-1 ; k++){

                       int l = k+1;
                       for(;l<n;l++){
                           long long sum = (long long) nums[i]+nums[j]+nums[k]+nums[l];
                           if(sum == target){
                               st.insert({nums[i],nums[j],nums[k],nums[l]});
                           }
                       }
                   }
                   
                    
               }


           }

           for(auto x:st){
               ans.push_back(x);
           }
        return ans;
    }
};
