class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        if(sentence.length() <26){
            return false;
        }
       vector<int> ch(26 , 0);
        
        
        for(int i = 0 ; i<sentence.length() ; i++){
           int pos = sentence[i] - 'a';
            
            ch[pos]++;
                
                
        }
        
        for(int i= 0 ; i<26 ;i++){
            
            if(ch[i] ==0){
                return false;
            }
               
        }
        return true;
      
    }
};
