class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int ans = 0;
        
        vector<int>temp = heights;
        sort(temp.begin() ,temp.end());
        
        for(int i = 0 ; i<temp.size() ; i++){
            if(temp[i] != heights[i]){
                ans++;
            }
        }
        return ans;
    }
};
