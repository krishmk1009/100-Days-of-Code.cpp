class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
     priority_queue<int> pq;
    int ans = -1;


     for(auto i:nums){
         pq.push(i);
     }

     int i = 0;

     while(i!=k){
         ans = pq.top();
         pq.pop();
         i++;
     }


return ans;
      

      

       
    }
};
