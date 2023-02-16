class Solution {
public:
    int similarPairs(vector<string>& words) {
        
     int count =0;
     for(int i=0;i<words.size();i++){
         set<char>s(words[i].begin(),words[i].end());
         string str(s.begin(),s.end());
         words[i] = str;
     }

     for(int i=0;i<words.size();i++){

         for(int j=i+1;j<words.size();j++){
             if(words[i]==words[j]){
                 count++;
             }
         }
     }
     return count;
    }
};
