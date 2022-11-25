class Solution {
public:
    string toLowerCase(string s) {
        string ans = "";

        for(int i = 0 ; i<s.length() ; i++){

            char ch = tolower(s[i]);
            ans+=ch;

        }

        return ans;
    }
};
