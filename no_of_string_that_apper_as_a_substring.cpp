class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;

        for(int i = 0 ; i<patterns.size() ; i++){

        string given = patterns[i];
        int len = given.length();
        
        int j =0;
        while(j<word.length()){
            string temp = word.substr(j , len);

            if(given == temp){
                count++;
                break;
            }

            j++;


        }


        
        }
        return count;
    }
};
