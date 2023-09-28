class Solution {
public:

    
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0){
            return "";
        }
        string ans = "";
        int minLen = INT_MAX;

        for(auto a:strs){
            if(minLen>a.size()){
                minLen = a.size();
            }
        
        }

        for(int i = 0;i<minLen ; i++){
            char ch = strs[0][i];

            for(auto str:strs){
                if(str[i]!=ch){
                    return ans;
                }


            }
 ans+=ch;

        }
        return ans;

    }
};
