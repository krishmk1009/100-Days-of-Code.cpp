class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int l = 0 , r = 0 ;
        unordered_map<char,int>mp;

        for(;r<s.size() ; r++){

            mp[s[r]]++;

            for(;mp[s[r]] > 1 ; l++){
                mp[s[l]]--;
            }

            ans = max(ans , r-l+1);
        }

        return ans;
    }
};
