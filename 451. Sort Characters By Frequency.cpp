class Solution {
public:
    string frequencySort(string s) {
        string ans = "";


        map<char,int>mp;
        vector<pair<int,char>>v;

        for(auto c:s){
            mp[c]++;
        }

        for(auto it= mp.begin() ; it!=mp.end() ; it++){
            v.push_back(make_pair(it->second , it->first));
        }

        sort(v.begin() , v.end());

        for (auto it = v.begin(); it != v.end(); it++){

            for(int i =0;i<it->first ; i++){
                ans+= it->second;
            }

        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
