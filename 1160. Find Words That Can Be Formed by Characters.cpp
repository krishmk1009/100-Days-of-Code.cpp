class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
       vector<int>freqChar(26,0);

       for(auto x:chars){
           freqChar[x-'a']++;
       }

    for(auto str:words){

        vector<int>freqWords(26,0);
    bool flag = true;
        for(auto x:str){

            if(++(freqWords[x-'a']) > freqChar[x-'a']){
                flag = false;
                break;
            }
        }

        if(flag){
            ans+= str.length();
        }
    }
        return ans;
    }
};
