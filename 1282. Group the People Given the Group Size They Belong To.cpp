class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,queue<int>>mp;
        vector<vector<int>>ans;

        for(int i = 0;i<groupSizes.size() ; i++){
           mp[groupSizes[i]].push(i);
        }

        for(auto it:mp){
            int size = it.first;

            while(!it.second.empty()){
                vector<int>temp;
                for(int i =0;i<size ; i++){
                    temp.push_back(it.second.front());
                    it.second.pop();
                }
                 ans.push_back(temp);
            }
   
        }
return ans;


    }
};
