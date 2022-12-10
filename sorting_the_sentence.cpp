class Solution {
public:
    string sortSentence(string s) {
        string ans ="";
        map<int,string> mp;
        int j = 0;
         string temp ;
        for(int i = 0 ; i<s.length()  ; i++){
         
          if(s[i] ==' '){
              continue;
          }
          if(s[i] >='A' && s[i]<='Z' || s[i] >='a' && s[i]<='z' ){
            
               temp+=s[i];
              
          }

          else if(s[i]>='1' && s[i]<='9'){
            int n = int(s[i]) -48;
              mp[n] = temp;
              cout<<temp<<" "<<n<<endl;
              temp="";
              
          }
        
        }
        for(auto it=mp.begin() ; it!=mp.end() ; it++){
            
            ans+= it->second;
            ans+=' ';
        }

        return ans.substr(0,ans.length()-1);
    }
};
