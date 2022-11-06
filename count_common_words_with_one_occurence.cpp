class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int> mp1;
        map<string, int>mp2;
        int count = 0;

        for(int i = 0 ; i<words1.size() ; i++){
            mp1[words1[i]]++;
        }
         for(int i = 0 ; i<words2.size() ; i++){
            mp2[words2[i]]++;
        }

        for(auto it1=mp1.begin() ; it1!=mp1.end() ;it1++){
           if(it1->second >1){
               continue;
           }

           for(auto it2=mp2.begin() ; it2!=mp2.end() ;it2++){
               if(it1->first == it2->first && it1->second ==1 && it2->second == 1){
                   count++;
               }
           }
        }
        return count;
    }
};
