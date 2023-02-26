class Solution {
public:
    int smallestEvenMultiple(int n) {
        int val = 2;
        while(true){
            if(val%2==0 && val%n==0){
                return val;
            }

            val++;
        }
        
    }
};
