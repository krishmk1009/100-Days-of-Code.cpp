class Solution {
public:
    int minPartitions(string n) {
        
        int ans = 0;

      
        for(int i=0 ; i<n.length() ;i++){
                int digit = stoi(string(1, n[i]));

            ans = max(ans , digit);
        }

    

        return ans;
    }
};
