class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        

        for(int i=0;i<score.size() ; i++){
            int maxi = INT_MIN;
            int row=-1;

            for(int j=i ; j<score.size() ;j++){
                if(maxi<score[j][k]){
                    maxi = score[j][k];
                    row=j;
                }


            }
            swap(score[i] , score[row]);

            


        }
        return score;
    }
};
