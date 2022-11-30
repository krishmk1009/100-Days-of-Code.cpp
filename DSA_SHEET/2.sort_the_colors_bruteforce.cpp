class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>red;
         vector<int>white;
          vector<int>blue;
      vector<int>ans;
          for(int i = 0 ; i<nums.size() ; i++){
              if(nums[i] == 0){
                  red.push_back(nums[i]);
              }
               if(nums[i] == 1){
                  white.push_back(nums[i]);
              }

              else if(nums[i] == 2){
                   blue.push_back(nums[i]);
              }
          }

        int i=0;
       while(i<red.size()){
           ans.push_back(red[i++]);
           
       }
            i=0;
       while(i<white.size()){
           ans.push_back(white[i++]);
       }
          i=0;
       while(i<blue.size()){
           ans.push_back(blue[i++]);
       }

       for(int i = 0 ; i<ans.size() ; i++){
           cout<<ans[i]<<" ";
       }
         nums = ans;
    }
};
