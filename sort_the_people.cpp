class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string , greater<int> > mp;
        vector<string> ans;
        
        
        for(int i = 0 ; i<heights.size() ; i++){
            
            mp.insert({heights[i] , names[i]});
            
        }
        
        map<int,string>::iterator it;
        
        for(auto it= mp.begin() ; it!= mp.end() ; it++){
            ans.push_back(it->second);
        }
        
        return ans;
    }
};
