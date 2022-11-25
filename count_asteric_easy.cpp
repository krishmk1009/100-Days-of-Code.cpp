class Solution {
public:
    int countAsterisks(string s) {
        
        int ans = 0;
        int countBar = 0;

        for(int i = 0 ; i<s.length() ;i++){

            if(s[i] =='|'){
                countBar++;
            }

            if(countBar%2 != 1 ){
                if(s[i] =='*'){
                    ans++;
                }
            }
        }
        return ans ;
    }
};
