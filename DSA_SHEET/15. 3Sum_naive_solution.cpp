15. 3Sum
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int> > st;

        for(int i =0;i<nums.size()-2 ;i++){
           
            vector<int>temp(3,0);
            bool flag = false;
            for(int j=i+1 ; j<nums.size() ; j++){
                for(int k=j+1;k<nums.size() ;k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                        temp={nums[i] , nums[j] , nums[k]};
                        sort(temp.begin() , temp.end());
            
                        st.insert(temp);
                    }
                }
                 
                }


            }


        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
    }
};
