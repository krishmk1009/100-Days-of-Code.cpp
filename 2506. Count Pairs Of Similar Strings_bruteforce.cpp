class Solution {
public:
    int similarPairs(vector<string>& words) {
        
        int count=0;
        for(int i=0;i<words.size();i++){
            set<char> ch;
            int j=0;
            while(j<words[i].length()){

                ch.insert(words[i][j]);
                j++;
            }

            for(int k=i+1;k<words.size() ; k++){
                set<char> secondCh;

                 int f=0;
                 while(f<words[k].length()){

                    secondCh.insert(words[k][f]);
                    f++;
                }
                if(ch==secondCh){
                    count++;
                }

            }


        }
        return count;
    }
};
