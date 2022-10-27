class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> ans;
       map<int,int> mp;
        
        
        
        for(int i = 0 ; i<items1.size() ; i++){
            int value = items1[i][0];
            int weight = items1[i][1];
            
            mp[value] = weight;
            
        }
        
        for(int i = 0 ; i<items2.size() ; i++){
            int value = items2[i][0];
            int weight = items2[i][1];
            
            if(mp.find(value) == mp.end()){
                mp[value] = weight;
            }
            else{
                mp[value] += weight;
            }
        }
        
map<int , int> :: iterator it;
        
        for(auto it = mp.begin() ; it!= mp.end() ; it++){
            vector<int> pair = {it->first , it->second};
            ans.push_back(pair);
        }
        return ans;
        
        
    }
};
