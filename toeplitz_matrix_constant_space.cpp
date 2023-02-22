class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        int i=0;

        while(i<matrix.size()-1){
            
            for(int j = 0;j<matrix[i].size()-1 ;j++ ){
                if(matrix[i][j] != matrix[i+1][j+1]){
                    return false;
                }
            }
            
            i++;
          
        }




        return true;
    }
};
