


class Solution {
public:
    bool isPalindrome(string str) {
          char ch;
    string ans="";

    for(int i = 0 ; i<str.length() ; i++){
        if((str[i] >=65 && str[i]<=90) || (str[i] >=97 && str[i]<=122) || str[i] >= '0' && str[i]<='9') {
            if((str[i] >=65 && str[i]<=90)){
                ch = str[i]+32;
            }
            else{
                ch = str[i];
            }
            // ch = tolower(str[i]+32);

            ans += ch;
        }
        
    }
    // string final = to(ans);
    

        int start = 0;
   int end = ans.length()-1;

   while(start<end){
    // swap(ans[start], ans[end]);
    // start ++;
    // end--;
    if(ans[start] == ans[end]){
        start ++;
        end --;
    }
    else{
        return false;
    }

    

   }
   return true;
        
        
    }
};
