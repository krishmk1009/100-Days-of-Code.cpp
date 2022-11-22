class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> mp;
        vector<string>ans;

        string s3 = s1+" "+s2;
        string temp="";
        
        for(int j = 0 ;j<s3.length() ; j++){
          
          
          if(s3[j]!=' '){
              temp+=s3[j];
          }
          else{
              mp[temp]++;
              temp = "";
          }
        if(j==s3.length()-1){
             mp[temp]++;
        }
            
        }

        for(auto it=mp.begin() ;it!=mp.end() ; it++){
            if(it->second ==1){
                ans.push_back(it->first);            }
        }

        return ans;
    }
};
