class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        int ans = 0;
        
        for(int i = 0 ; i<words.size() ; i++){
            string str  = words[i];
            for(int j = 0 ; j<words[i].length() ; j++){
                
                if(allowed.find(str[j]) == string::npos ){
                    
                    break;
                }
                
                if(j>=str.length()-1){
                    ans++;
                }
                
            }
        }
        return ans;
    }
};
