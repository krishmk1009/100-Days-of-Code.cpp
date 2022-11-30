class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>store;

        for(int i = 0 ; i<matrix.size() ; i++){
            for(int j = 0 ; j<matrix[i].size() ; j++){
                if(matrix[i][j] == 0){
                    vector<int>temp = {i,j};
                    store.push_back(temp);
                }
            }
        }

        for(int i = 0 ; i<store.size() ; i++){
            int row = store[i][0];
            int col = store[i][1];

            for(int j  = 0 ;j<matrix[row].size() ; j++){
                matrix[row][j] = 0;
            }
            for(int k  = 0 ;k<matrix.size() ; k++){
                matrix[k][col] = 0;
            }
        }
    }
};
