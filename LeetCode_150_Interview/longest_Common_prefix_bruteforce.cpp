class Solution {
public:

bool checkPalindrome(string str){
    

    int start =0 ;
    int end = str.length()-1;

    while(start<=end){
        if(str[start++] !=str[end--]){
            return false;
        }

    }

    return true;
}
    string longestPalindrome(string s) {
        if(s.length() ==1) return s;
        string ans = "";
        ans+=s[0];

        for(int i = 0 ;i <s.length() ; i++){
            string temp="";
            temp+=s[i];

            for(int j = i+1 ;j<s.length() ; j++){
                
                temp+=s[j];

               if(checkPalindrome(temp)) {
                   if(ans.size() <temp.size()){
                       ans = temp;
                   }
               }
                
            }
        }
        return ans;
    }
};
