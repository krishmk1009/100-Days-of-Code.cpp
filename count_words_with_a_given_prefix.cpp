class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        int len = pref.length();
        
        for(int i= 0 ; i<words.size() ; i++){
            
            string value = words[i].substr(0,len);
            if(value == pref){
                count++;
            }
        }
        return count;
    }
};
