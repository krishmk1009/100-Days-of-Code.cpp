class Solution {
public:

    void mark_the_island(vector<vector<char>>& grid, int x, int y , int row , int col){

        if(x <0 || x>=row || y>=col || y<0 || grid[x][y]!='1'){
            return;
        }

        grid[x][y]='2';


        mark_the_island(grid, x+1 , y, row , col);
        mark_the_island(grid, x-1 , y, row , col);
        mark_the_island(grid, x , y+1, row , col);
        mark_the_island(grid,x , y-1, row , col);

        
 

    }
    int numIslands(vector<vector<char>>& grid) {
        int size = grid.size();

        if(size ==0){
            return 0;
        }

        int no_of_island =0;
        int row=grid.size();
        for(int i=0;i<row;++i){
            int col=grid[i].size();
            for(int j=0;j<col;++j){
                if(grid[i][j]=='1'){
                    mark_the_island(grid, i , j,row , col);
                    no_of_island+=1;
                }
            }
        }

        return no_of_island;
    }
};
