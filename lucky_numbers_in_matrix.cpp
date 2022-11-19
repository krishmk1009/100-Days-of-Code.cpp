class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>ans;
        
        for(int  i = 0 ; i<matrix.size() ; i++){
            int mini = INT_MAX;
            int maxi = INT_MIN;
            int index = -1;
            for(int j =0 ;j<matrix[i].size() ; j++){

                if(matrix[i][j] < mini){
                    mini = matrix[i][j];
                    index = j;
                }
            }

            for(int i = 0 ; i<matrix.size() ; i++){
             

                if(matrix[i][index] > maxi){
                    maxi = matrix[i][index];
                }
            }

            if(maxi == mini){
                 ans.push_back(mini);
                }

            
        }
        return ans;
    }
};
