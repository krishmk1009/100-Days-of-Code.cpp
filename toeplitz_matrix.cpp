class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        int i=0;

        while(i<matrix.size()-1){
            vector<int>v1;
            vector<int>v2;
            for(int j = 0;j<matrix[i].size()-1 ;j++ ){
                v1.push_back(matrix[i][j]);
            }
            for(int k = 1;k<matrix[i+1].size() ;k++ ){
                v2.push_back(matrix[i+1][k]);
            }

            if(v1!=v2){
                return false;
            }
            i++;
          
        }




        return true;
    }
};
