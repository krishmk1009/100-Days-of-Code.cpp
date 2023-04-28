class Solution {
public:

 static bool cmp(pair<int,int>&a , pair<int,int>&b){
    return a.second <b.second;
}
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
        }

         priority_queue<pair<int,int>>pq;

        for(auto it= mp.begin() ; it!=mp.end() ; it++){
            pq.push(make_pair(it->second, it->first));

        }

        vector<int>ans;

        int a = 0;
    while(a<k){
        int top = pq.top().second;
        pq.pop();
        ans.push_back(top);
        a++;
    }

    return ans;
    }
};
