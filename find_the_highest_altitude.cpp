class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       vector<int> alt;
        
        alt.push_back(0);
        for(int i = 1 ; i<=gain.size() ; i++){
            
            int temp = gain[i-1]+ alt[i-1];
            alt.push_back(temp);
        }
        
        
int ans = INT_MIN;
        for(int i = 0 ; i<alt.size() ; i++){
            ans = max(ans , alt[i]);
        }
        
        return ans;
    }
};
