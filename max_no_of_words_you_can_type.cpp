class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<int> s;

        for(auto x:brokenLetters){
            s.insert(x);
        }

        int i=0;
        int count = 0;
        int n = text.length();

        while(i<n){

            bool flag= true;

            while(i<n && text[i]!=' '){
                if(s.count(text[i])){
                    flag = false;
                }
                i++;
            }

            if(flag){
                count++;
            }
            i++;
        }
        return count;
    }
};
