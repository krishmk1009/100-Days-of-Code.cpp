class Solution {
    int fun(vector<vector<char>>row ,char first){
  
            for(int j =0;j<row.size() ;j++){

                for(int k = 0 ;k<row[j].size() ;k++){
                    if(first == row[j][k]){
                        return j;
                    }
                }
            }
       return -1;

    }
public:
    vector<string> findWords(vector<string>& words) {
        vector<vector<char>>row = {{'Q','W','E','R','T','Y','U','I','O','P', 'q','w','e','r','t','y','u','i','o','p'},{'A','S','D','F','G','H','J','K','L','a', 's','d','f','g','h','j','k','l'},{'Z','X','C','V','B','N','M','z','x','c', 'v','b','n','m'}};
        vector<string>ans;

        for(int i =0;i<words.size() ; i++){
           

            int ind = fun(row , words[i][0]);

            bool flag = true;
            for(int j = 0 ; j<words[i].size() ; j++){
               
                for(int k =0 ; k<row[ind].size() ; k++){

                    if(find(row[ind].begin() , row[ind].end() , words[i][j]) == row[ind].end()){
                        flag = false;
                        break;
                    }
                  
                }

            }
            
                if(flag){
                    ans.push_back(words[i]);
                }
            
        }

        return ans;
    }
};
