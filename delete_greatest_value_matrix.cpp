class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans = 0;
        
        for(int i = 0 ;i<grid.size() ; i++){
            sort(grid[i].begin() , grid[i].end());
        }

         for(int i = 0 ;i<grid[0].size() ; i++){
           int tempMax= INT_MIN;
            for(int j =0 ; j <grid.size() ; j++){

                if(grid[j][i] > tempMax){
                    tempMax = grid[j][i];
                }
            }
            ans+= tempMax;
        }
        return ans;
    }
};
