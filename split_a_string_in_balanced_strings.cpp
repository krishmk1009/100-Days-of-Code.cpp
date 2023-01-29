class Solution {
public:
    bool check(string s){
        int countR=0;
        int countL = 0;

        for(int i = 0 ; i<s.length() ;i++){
            if(s[i] =='R'){
                countR++;
            }
            if(s[i] =='L'){
                countL++;
            }
        }

        if(countR==countL){
            return true;
        }

        return false;
    }
    int balancedStringSplit(string s) {
      int  count =0;
        for(int i = 0 ; i<s.length() ; i++){
            string sub="";

            for(int j = i ; j<s.length() ; j++){
                 sub+= s[j];

             
            }
               if(check(sub)){
                    count++;
                }
        }
        return count;
    }
};
