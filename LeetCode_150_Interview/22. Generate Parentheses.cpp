class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        helper(ans , "" , n , n);
        return ans;

    }

    void helper(vector<string> &ans ,string str , int left, int right){
        if(left == 0 && right ==0){
            ans.push_back(str);
            return;
        }

        if(left>0) helper(ans , str+"(", left-1 , right);
        if(right>left) helper(ans , str+")", left ,right-1);
    }
};
