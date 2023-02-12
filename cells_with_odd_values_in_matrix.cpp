class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int ans = 0;

          vector<vector<int>> vec(m, vector<int>(n, 0));

          for(int i = 0; i <indices.size() ;i++){

              int pos1 = indices[i][0];
              int pos2 = indices[i][1];


              for(int j = 0 ; j<m;j++){
                  vec[j][pos2]+=1;
              }
              
               for(int k = 0 ; k<n;k++){
                  vec[pos1][k]+=1;
              }


          }

          for(int i=0;i<vec.size() ; i++){
              for(int j = 0 ; j<vec[i].size();j++){
                  if(vec[i][j]%2==1){
                      ans++;
                  }
              }
          }

   
    return ans;
    }
};
