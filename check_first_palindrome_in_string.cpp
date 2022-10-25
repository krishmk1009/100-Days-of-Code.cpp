class Solution {
public:
    
    bool palindrome(string val){
        
        int st = 0;
        int end = val.length()-1;
        
        while(st<=end){
            if(val[st] != val[end]){
                return false;
            }
            
            st++;
            end--;
        }
        
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        
        for(int i = 0 ; i<words.size() ; i++){
            
            string val = words[i];
            if(palindrome(val)){
                return val;
            }
            
            
        }
        return "";
    }
};
