class Solution {
public:
    int balancedStringSplit(string s) {
 
        int bal=0;
        int count = 0;
        for(int i = 0 ; i<s.length() ; i++){
            if(s[i] =='L'){
                bal ++;
            }
            else{
                bal--;
            }

            if(bal == 0){
                count++;
            }
        }

        return count;

    }
};
