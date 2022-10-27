class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        
        for(int i = 0 ; i<arr.size() ; i++){
            if(i == arr.size() - 1){
                arr[i] = -1;
                break;
            }
            int maxii = INT_MIN;
            for( int j = i+1 ; j<arr.size() ; j++){
                maxii= max(arr[j] , maxii);
                
            }
            
            arr[i] = maxii;
        }
        return arr;
    }
};
