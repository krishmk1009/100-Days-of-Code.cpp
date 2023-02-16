2562. Find the Array Concatenation Value
class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        
        long long ans=0;

        int first = 0;
        int last =nums.size()-1;

        while(first<last){
            

            string firstValue = to_string(nums[first]);
            string secondValue = to_string(nums[last]);
            string conc = firstValue+secondValue;

            int val = stoi(conc);

           
            ans+=val;
            first++;
            last--;


        }
        if(nums.size()%2 ==1){
            int val = (nums.size()-1)/2;
            ans+= nums[val];
        }
        return ans;
    }
};
