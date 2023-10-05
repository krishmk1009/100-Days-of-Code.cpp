class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        

        for(int i = 0 ;i<matrix.size() ; i++){
            int first = matrix[i][0];
            int n = matrix[i].size();
            int last = matrix[i][n-1];

            if(!(target >= first && target<=last) ) continue;
            bool flag = false;
            for(int j = 0;j< n ; j++){
                if(matrix[i][j] == target){
                    return true;
                }
            }

            if(flag){
                break;
            }
        }

        return false;
    }
};
