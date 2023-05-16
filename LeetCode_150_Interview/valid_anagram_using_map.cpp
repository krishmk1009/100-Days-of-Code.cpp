class Solution {
public:
    bool isAnagram(string s, string t) {
      map<char,int>mp1;
        map<char,int>mp2;

        for(int i =0;i<s.length() ; i++){
            mp1[s[i]]++;
        }

        
        for(int i =0;i<t.length() ; i++){
            mp2[t[i]]++;
        }

//  ordered_map<char,int>iterator ::it1
//   ordered_map<char,int>iterator ::it2

  for(auto it1 = mp1.begin() , it2=mp2.begin() ; it1!=mp1.end() || it2!=mp2.end(); it1++ , it2++){
        if(!(it1->first == it2->first && it1->second == it2->second)){
return false;
}


  }

  return true;

    }
};
