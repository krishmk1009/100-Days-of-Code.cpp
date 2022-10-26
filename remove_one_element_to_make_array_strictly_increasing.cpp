class Solution {
public:
    
    bool increasing(vector<int> temp){
        
        for(int i = 0 ; i<temp.size()-1 ; i++){
            if(temp[i+1]<=temp[i]){
                return false;
            }
        }
        return true;
    }
    bool canBeIncreasing(vector<int>& nums) {
        
        for(int i = 0 ; i<nums.size() ;i++){
            vector<int>temp;
            temp = nums;
            
            temp.erase(temp.begin()+i);
            
            if(increasing(temp)){
                return true;
            }
        }
        return false;
        
    }
};
