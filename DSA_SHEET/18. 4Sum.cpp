class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
           vector<vector<int>>ans;
           set<vector<int>> st;
            sort(nums.begin() , nums.end());

           for(int i=0;i<nums.size() ; i++){
               int j = i+1;

               for(;j<nums.size() ;j++){
                   int k =j+1;
                   int l = nums.size()-1;

                   while(k<l){
                       long long sum =(long long) nums[i]+nums[j]+nums[k]+nums[l];

                       if(sum == target){
                           st.insert({nums[i],nums[j],nums[k],nums[l]});
                           k++;
                           l--;
                       }

                       else if(sum <target){
                           k++;
                       }
                       else{
                           l--;
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
