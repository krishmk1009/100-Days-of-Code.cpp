class Solution {
public:
    int strStr(string haystack, string needle) {
       

        int hlen = haystack.size();
        int nLen = needle.size();

        int nIndex = 0;

        for(int i = 0;i<hlen ; i++){

            if(haystack[i] == needle[nIndex]){
                nIndex++;
            }

            else{

                i= i-nIndex;
                nIndex = 0;

            }

            if(nIndex == nLen ){
                return i-nLen +1;
            }
        }


          return -1;

        
    }
};
