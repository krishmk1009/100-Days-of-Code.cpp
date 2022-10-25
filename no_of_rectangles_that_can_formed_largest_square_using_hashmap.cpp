class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        
      unordered_map<int,int> mp;
        
           int maxLen  = INT_MIN;
        for(int i = 0 ; i<rectangles.size() ; i++){
            int value = min(rectangles[i][0] , rectangles[i][1]);
            
            if(mp.find(value)==mp.end()){
                mp[value] = 1;
            }
            else{
                mp[value]++;
            }
            
            maxLen = max(maxLen , value);
           
    
        }
        
        return mp[maxLen];
    }
};
