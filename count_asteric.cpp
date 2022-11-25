class Solution {
public:
    int countAsterisks(string s) {
        
        string ansPrev ="";
        int ans=0;

        int i = 0;
        int countBr = 0;
        while(i<s.length()){

            if(s[i] =='|'){
                countBr++;
                i++;
                if(countBr%2 ==1){
                    while(s[i] != '|'){
                        i++;
                    }
                    countBr;
                }
            }

            else{
                ansPrev += s[i];
                i++;
            }
        }
    for(int i = 0 ; i<ansPrev.length() ; i++){
        if(ansPrev[i] =='*'){
            ans++;
        }
    }
        return ans ;
    }
};
