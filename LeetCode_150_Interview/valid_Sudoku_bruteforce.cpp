class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i =0;i<board.size() ;i++){
            unordered_map<char,int> mp;

            for(int j =0;j<board[i].size() ; j++){
                if(board[i][j] =='.'){
                    continue;
                }
                if(mp[board[i][j]] >0){
                    cout<<"in first loop";
                    return false;
                }
                else{
                    mp[board[i][j]]++;
                }
            }
            mp.clear();
        }
        for(int i =0;i<board.size() ;i++){
            unordered_map<char,int> mp;

            for(int j =0;j<board[i].size() ; j++){
                if(board[j][i] =='.'){
                    continue;
                }
                if(mp[board[j][i]]>0){
                     cout<<"in second loop";
                    return false;
                }
                else{
                    mp[board[j][i]]++;
                }
            }
            mp.clear();
        }

        int row=0 , col =0;

        for(int i = 0;i<9 ; i+=3){
            for(int j = 0;j<9;j+=3){
                
                unordered_map<char,int>mp;
                for(int k= 0; k<3;k++){
                    for(int m = 0;m<3;m++){

                        if(board[k+i][m+j] =='.'){
                            continue;
                        }
                        if(mp[board[k+i][m+j]]>0){
                            return false;
                        }
                        else{
                            mp[board[k+i][m+j]]++;
                        }
                    }
                }
            }
        }

        
        return true;
    }
};
