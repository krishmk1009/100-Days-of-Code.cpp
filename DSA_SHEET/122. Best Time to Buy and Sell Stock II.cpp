class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int buy =prices[0];

       for(int i=0;i<prices.size()-1 ;i++){

           if(buy<prices[i+1]){
               ans+= prices[i+1]- buy;
               buy = prices[i+1];
           }

           if(prices[i+1] < buy ){
               buy = prices[i+1];
           }

       }
        return ans;
    }
};
