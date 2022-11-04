class Solution {
public:
    string reverseVowels(string s) {
        set<int>store;
string rev = "";
string ans="";
        for(int i = 0 ; i<s.length() ; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || 
            s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ){
                rev+= s[i];
                store.insert(i);
            }
        }
        reverse(rev.begin() , rev.end());
int j = 0;
        for(int i = 0 ; i<s.length() ; i++){
            if(store.find(i)==store.end()){
                ans+=s[i];
            }
            else{
                ans+=rev[j++];
            }
        }
return ans;
    }
};
