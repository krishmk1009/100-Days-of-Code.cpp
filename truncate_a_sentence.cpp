class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans;
        
        int space =0;
        int i = 0;
        while(space!=k     ){
            
            
            ans+= s[i];
            
            if(s[i] ==' '){
                space++;
            }
            
            if(s.length() <=i){
                break;
            }
            
            
            i++;
        }
        return ans.substr(0,ans.length()-1);
    }
};
