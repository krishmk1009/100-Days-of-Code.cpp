class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;

        for(int i = 0 ; i<candies.size() ; i++){
            int val = candies[i] + extraCandies;
            int maxi = INT_MIN;
            for(int j = 0 ; j<candies.size() ; j++){
                maxi = max(maxi , candies[j]);
            }
            if(val>=maxi){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};
