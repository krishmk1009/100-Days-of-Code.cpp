class Solution {
public:
    int mySqrt(int x) {
        if(x <2) return x;
        for(int i = 0 ; i<x ; i++){

            

            if(i*i ==x){
                return i;
            }
            long long temp = i+1;
           if((i*i )< x && (temp*temp) >x){
                return i;
            }
        }

        return -1;
    }
};
