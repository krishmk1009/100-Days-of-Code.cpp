2309. Greatest English Letter in Upper and Lower Case
class Solution {
public:
    string greatestLetter(string s) {
      string lower ="";
      unordered_map<char,int>mp;
        string greater ="";
      for(auto c:s){
          if(c>='a' && c<='z'){
              lower+=c;
          }
          else{
              mp[c]++;
          }
      }

      for(auto c:lower){
          char temp = c -'a'+'A';

          if(mp.find(temp) != mp.end()){
              greater+=temp;
          }
      }


sort(greater.begin() , greater.end());
string ans="";
if (!greater.empty()) {
        ans = string(1, greater[greater.size() - 1]);
    }
return ans;
    }
};
