class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;

        int start =0;
        int end = height.size()-1;

       while(start<=end){

           if(height[start] < height[end]){
               int val = height[start]*(end-start);
               ans = max(ans,val);
               start++;
           }
           else{
               int val = height[end]*(end-start);
               ans = max(ans,val);
               end--;
           }

           
       }
       return ans;
    }
};
