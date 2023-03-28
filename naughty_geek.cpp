// Geek has got an offer from Google. Now he has N days left to join company and also he has N girlfriends whom he have to meet exactly once. You are Geek's friend and you have to find all the ways in which he can meet his girlfriend.


class Solution{   
public:

    long long int fact(int n){
        if(n ==0 || n == 1){
            return 1;
        }
        
        return n * fact(n-1);
    }
    long long int totalWays(int N)
    {
        long long int ans = fact(N);
        return ans;
    }
};
