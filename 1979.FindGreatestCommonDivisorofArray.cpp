// 1979. Find Greatest Common Divisor of Array leetCode

class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        
        int gcd = 0;
        int small = INT_MAX;
        int large = 0;
        
        for(int i = 0 ; i<nums.size() ; i++){
            
            
            large = max(nums[i] , large);
            small  = min(nums[i] , small);
        }
        
        int i = 1;
        
        cout<<small<<" "<<large;
        while(i<=small){
            
            if(small%i == 0 && large%i ==0){
                gcd = i;
            }
           
            i++;
        }
        return gcd;
    }
};
