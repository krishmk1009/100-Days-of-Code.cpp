class Solution {
public:
    string decodeMessage(string key, string message) {
       string ans = "";
      map<char,char>mp;
      int k = 97;
      for(int i = 0 ; i<key.length();i++){
            if(key[i]!=' '){
                if(mp.find(key[i])==mp.end()){
                    char c= k++;
                    mp[key[i]]=c;
                }
            }
      }
    
       
        for(int i = 0 ; i<message.length() ; i++){
            if(message[i] == ' '){
                ans+=' ';
            }
            else{
              ans+=  mp[message[i]];
            }
        }
  return ans;

       
    }
};
