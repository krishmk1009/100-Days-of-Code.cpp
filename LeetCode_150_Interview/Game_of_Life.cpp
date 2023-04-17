class Solution {
public:
    bool isValidNeighbour(int curr_x , int curr_y ,vector<vector<int>>& board ){
        return (curr_x >=0 && curr_x <board.size() && curr_y >=0 && curr_y <board[0].size());
    }
    void gameOfLife(vector<vector<int>>& board) {
        vector<int> dx= {0,0,1,1,1,-1,-1,-1};
        vector<int>dy={1,-1,1,-1,0,0,1,-1};

        for(int row  =0;row<board.size() ; row++){
            for(int col=0 ;col<board[0].size() ; col++){
                int liveCount = 0;

               for(int i = 0;i<8;i++){
                   int curr_x = row+dx[i] , curr_y = col+dy[i];

                   if(isValidNeighbour(curr_x , curr_y , board) && abs(board[curr_x][curr_y]) ==1){
                       liveCount++;
                   }
               }

               if(board[row][col] ==1 && (liveCount <2 || liveCount >3 )){
                   board[row][col] =-1;
               }

               if(board[row][col] ==0 && liveCount ==3){
                   board[row][col]=2;
               }
            }
        }

        for(int i = 0;i<board.size() ; i++){
            for(int j  =0 ; j<board[0].size();j++){
                if(board[i][j] >= 1){
                    board[i][j]=1;
                }
                else{
                    board[i][j] =0;
                }
            }
        }
       
    }
};
