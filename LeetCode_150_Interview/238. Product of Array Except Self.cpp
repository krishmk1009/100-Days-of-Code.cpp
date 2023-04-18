class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total_value = 1;
        int total_zero = 0;

        for(auto i : nums) {
            if(i == 0) {
                total_zero++;
                continue;
            }
            total_value *= i;
        }

        cout << total_zero;

        if(total_zero > 1) {
            for(int i=0 ;i<nums.size() ; i++) {
                nums[i] = 0;

            }

            cout<<"executed if";
        } else {
            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] == 0) {
                    nums[i] = total_value;
                } else {
                    if(total_zero > 0) {
                        nums[i] = 0;
                    } else {
                        nums[i] = total_value / nums[i];
                    }
                }
            }
            cout<<"executed else";
        }
        return nums;
    }
};
