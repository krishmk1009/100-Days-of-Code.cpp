class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0 ; 
        
        for(int i = 0 ; i<sentences.size() ; i++){
            int temp = 0;
            string word = sentences[i];
            int len = sentences[i].length();
            
            for(int j = 0 ; j<len ; j++){
                
                if(word[j] ==' '){
                    temp++;
                }
                
                
                
            }
            
            ans = max(++temp, ans);
        }
        return ans;
    }
};
