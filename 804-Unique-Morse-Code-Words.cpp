class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> code ={
            ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
        };
        set<string> finalCode;

        for(int i = 0 ; i<words.size() ; i++){
            string curr = words[i];
            string temp ;

            for(int j = 0 ; j<words[i].length() ; j++){
                int n =curr[j] - 'a';
                temp+= code[n];
            }
            finalCode.insert(temp);
        }

return finalCode.size();
    }
};
