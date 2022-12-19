class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans = 0 ;

        for(int i = 0 ; i<arr.size() ; i++){
vector<int>temp;
            for(int j = i ; j<arr.size() ; j++){
                
                   temp.push_back(arr[j]);

                   if(temp.size() %2 ==1){
                        ans+= accumulate(temp.begin() , temp.end() , 0);
                   }
               
            }


        }
        return ans;
    }
};
