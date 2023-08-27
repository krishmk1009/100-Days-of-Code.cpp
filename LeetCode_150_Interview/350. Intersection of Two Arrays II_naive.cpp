class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>first(1001, 0);
        vector<int>second(1001, 0);
vector<int>ans;
        for(auto a:nums1){
            first[a]++;
        }
         for(auto a:nums2){
            second[a]++;
        }

        for(int i =0;i<1001;i++){
            if(first[i]>0 && second[i]>0){
                if(first[i] == second[i]){
                    while(first[i]--){
                        ans.push_back(i);
                    }
                }
                else{
                    int low = min(first[i] , second[i]);
                    while(low--){
                        ans.push_back(i);
                    }
                }
            }
        }
return ans;
    }
};
