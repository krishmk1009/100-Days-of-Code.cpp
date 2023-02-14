class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        map<char,int>mp;
        vector<int>indices(25,0);

        for(int i =0;i<s.length();i++){
            char ch = s[i];

            for(int j=i+1;j<s.length();j++){
                if(s[j] == ch){
                   int dist = j-i-1;
                   if(distance[ch-'a']!=dist){
                       return false;
                   }
                }
                
            }
        }
       

        
        return true;
    }
};
