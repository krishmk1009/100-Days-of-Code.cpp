class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
       map<int,char> ch;
        
        for(int i = 0 ; i<indices.size() ; i++){
            
            ch.insert(pair<int, char>(indices[i], s[i]));
            
        }
        
        map<int,char>:: iterator it;
        string ans;
        for(auto it = ch.begin() ; it!= ch.end() ; it++){
            ans+= it->second;
        }
        return ans;
        
    }
    
        
};
