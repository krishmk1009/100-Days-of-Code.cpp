1689. Partitioning Into Minimum Number Of Deci-Binary Numbers
class Solution {
public:
    int minPartitions(string n) {
        
       sort(n.begin() , n.end());
        int ans = stoi(string(1,n[n.length()-1]));

        return ans;
    }
};
