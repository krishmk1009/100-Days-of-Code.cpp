class Solution {
public:
    string removeOuterParentheses(string s) {
        string res ;
        int open = 0;

        for(auto i :s){
            if(i =='(' && open++ > 0){
                res+= i;
            }
            if(i ==')' && open-- > 1){
                res+= i;
            }


        }
        return res;
    }
};
