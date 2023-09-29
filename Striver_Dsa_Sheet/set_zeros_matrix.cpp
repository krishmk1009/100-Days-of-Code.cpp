class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size()*matrix[0].size();
        vector<int>row(n,0);
        vector<int>col(n,0);


        for(int i = 0 ; i<matrix.size() ; i++){
            for(int j =0 ; j<matrix[i].size() ; j++){


                if(matrix[i][j] ==0){
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }


         for(int i = 0 ; i<matrix.size() ; i++){
            for(int j =0 ; j<matrix[i].size() ; j++){

                if(row[i] || col[j]){
                    matrix[i][j]=0;
                }
            }
        }
    }
};
