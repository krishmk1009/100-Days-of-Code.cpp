class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        
        if(n%2==1){
             for(int i = 0;i<n ; i++){
            if(ans.size() == n){
                break;
            }
            
            if(i==0){
                ans.push_back(0);
                
            }
            
            else{
                int val = i;
                int negVal = val*(-1);
                ans.push_back(val);
                ans.push_back(negVal);
                
                
            }
        }
        }
        else{
            for(int i = 1 ; i<=n;i++){
                if(ans.size()==n){
                    break;
                }
                    
                int val = i;
                int negVal = val*(-1);
                ans.push_back(val);
                ans.push_back(negVal);
            }
        }
        
       
        return ans;
    }
};
