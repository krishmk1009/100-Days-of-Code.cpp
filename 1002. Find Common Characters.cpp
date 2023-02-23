class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
       vector<int>cnt(26,INT_MAX);
       for(auto it:words){
           vector<int>v(26,0);

           for(auto i:it){
               v[i-'a']++;
           }

           for(int i=0;i<26;i++){
               cnt[i] = min(cnt[i] ,v[i]);
           }
       }

       vector<string>ans;

       for(int i=0;i<26;i++ ){
           while(cnt[i]>0){
               string ch(1,(i+'a'));
               ans.push_back(ch);
               cnt[i]--;
           }
       }
        return ans;
    }
};
