class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans;
        vector<int>position;

        for(int i=0;i<s.length() ; i++){
            if(s[i]==c){
                position.push_back(i);
            }
        }

        for(int i = 0;i<s.length() ;i++){
            int mini = INT_MAX;

            for(int j = 0;j<position.size();j++){
                mini = min(mini, abs(i-position[j]));
            }
            ans.push_back(mini);
        }
        return ans;
    }
};
