class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        
        vector<int>sq;
           int maxLen  = INT_MIN;
        for(int i = 0 ; i<rectangles.size() ; i++){
            int value = min(rectangles[i][0] , rectangles[i][1]);
            
            sq.push_back(value);
            maxLen = max(maxLen , value);
            
            
        }
        
        int ans = 0;
        
        for(int  i = 0 ; i<sq.size() ; i++){
            if(sq[i] == maxLen){
                ans++;
            }
            
        }
        return ans;
    }
};
