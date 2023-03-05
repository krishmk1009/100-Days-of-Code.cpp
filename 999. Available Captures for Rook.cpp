class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int ans= 0;
        int index1,index2;
        bool foundRook = false;

        for(int i=0;i<board.size() ;i++){
            for(int j=0;j<board.size() ;j++){
                if(board[i][j] =='R'){
                    index1=i;
                    index2=j;
                    foundRook = true;
                    break;
                }
            }

            if(foundRook){
                break;
            }
            
        }

        for(int i=index2;i<board.size();i++){
           
            if(board[index1][i] =='p'){
                ans++;
                break;
            }
            else if(board[index1][i] =='B'){
                break;
            }
       
        }

        for(int i=index1;i<board.size() ;i++){
           
       
        if(board[i][index2] =='p'){
                ans++;
                break;
            }
            else if(board[i][index2] =='B'){
                break;
            }
        }

        for(int i=index2;i>=0;i--){
          
            if(board[index1][i]=='p'){
                ans++;
                break;
            }
            else  if(board[index1][i]=='B'){
                break;
            }
        }

        for(int i=index1;i>=0;i--){
            
            if(board[i][index2]=='p'){
                ans++;
                break;
            }
            else if(board[i][index2]=='B'){
                break;
            }
            
        }

    return ans;
    
    }
};
