class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        int ans = 0;


        for(int i = 0;i<n ;i++){


            int leftMax=0 ,rightMax  =0;

            int j = i;

            while(j>=0){
                leftMax = max(height[j] , leftMax);
                j--;
            }

            j = i;

            while(j<n){
                rightMax = max(rightMax , height[j]);
                j++;
            }

            ans+= min(rightMax , leftMax) - height[i];
        }

        return ans;
    }
};
