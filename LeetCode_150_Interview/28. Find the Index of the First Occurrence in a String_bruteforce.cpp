class Solution {
public:
    int strStr(string haystack, string needle) {
        unordered_map<string,int>mp;

        for(int i = 0 ;i<haystack.size() ; i++){


            if(needle[0] !=haystack[i]) continue;
            bool flag = true;
            int index = i+1;
            for(int j = 1 ; j<needle.size() ; j++){

                if(haystack[index++]  != needle[j]){
                    flag = false;
                    break;
                }
                
            }

            if(flag){
                return i;
            }
        }

        return -1;

        
    }
};
