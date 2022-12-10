class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>mp;

        for(int i = 0 ;i<s.length() ;i++){
            mp[s[i]]++;
        }
        int compare = mp[s[0]];
        for(auto it=mp.begin() ; it!=mp.end();it++){
            if(it->second !=compare){
                return false;
            }
        }

        return true;
    }
};
