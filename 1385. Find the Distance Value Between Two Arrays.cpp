1385. Find the Distance Value Between Two Arrays
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans =0;
        for(int i = 0;i<arr1.size() ; i++){

            bool flag = true;
            for(int j = 0 ; j<arr2.size() ;j++){
                int val = abs(arr1[i] - arr2[j]);

                if(val <= d){
                    flag =false;
                    break;
                }
            }

            if(flag){
                ans++;
            }
        }

        return ans;
    }
};
