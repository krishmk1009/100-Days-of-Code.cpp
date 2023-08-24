class Solution {
public:
    string removeDuplicates(string s) {
        

    string ans ="";
    ans+=s[0];

    for(int i =1;i<s.length() ;i++){

         if (!ans.empty()) {
       char last_char = ans[ans.size()-1];

       if(last_char != s[i]){
            ans+=s[i];
       }

       else{
           ans.pop_back();
       }
         }
         else{
             ans+=s[i];
         }

    }

    return ans;
    }
};
