class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        bool middleVisit = false;
        int ans = 0;
        int j = 0;
        int k = mat[0].size() - 1;
        for(int i =0 ; i<mat.size() ; i++){
            if(j!=k){
                ans += mat[i][j];
                ans+= mat[i][k];
                
            }
            else{
                ans+= mat[i][j];
            }
            
            j++;
            k--;
           
        }
        return ans;
    }
};
