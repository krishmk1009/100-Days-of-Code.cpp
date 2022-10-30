class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        //base condition
        for(int i =0 ; i<target.size() ; i++){
            if(std::find(arr.begin(), arr.end(), target[i]) != arr.end()){
                continue;
            } 
            else{
                return false;;
            }
        }
        
        sort(target.begin() , target.end());
        sort(arr.begin() , arr.end());
        if(arr==target){
            return true;
        }
        return false;
    }
};
