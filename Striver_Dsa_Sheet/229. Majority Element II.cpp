229. Majority Element II
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int ele1=INT_MIN;
        int ele2=INT_MIN;
        int cnt1 = 0;
        int cnt2=0;
        int n = nums.size();

        for(int i = 0;i<n ; i++){

                if(cnt1 == 0 && nums[i] !=ele2){
                    cnt1 = 1;
                    ele1= nums[i];
                }
                else if(cnt2 == 0 && nums[i] !=ele1){
                    cnt2 = 1;
                    ele2= nums[i];
                }

                else if(nums[i] == ele1) cnt1++;
                else if(nums[i] == ele2) cnt2++;

                else{
                    cnt1--;
                    cnt2--;
                }
        }

        vector<int>ans;


        cnt1=0 , cnt2=0;

        for(auto a:nums){
            if(a == ele1) cnt1++;
            if(a == ele2) cnt2++;
        }
    int mini = int(n / 3) + 1;

        if(cnt1 >= mini) ans.push_back(ele1);
        if(cnt2 >= mini) ans.push_back(ele2);

        return ans;
        
    }
};
