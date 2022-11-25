class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans ="";
        string temp="";
        int i = 0;
       size_t found = word.find(ch);
        if(found == string::npos){
            return word;
        }
        
        for(i ; i<word.size() ; i++){

            if(word[i] == ch){
                int k = i;
                while(k>=0){
                    temp+= word[k];
                    k--;
                }

                ans+= temp;
                i++;
                while(i<word.length()){
                    ans+= word[i];
                    i++;
                }
                break;


            }
        }
        return ans;
    }
};
