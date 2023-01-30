class Solution {

public:

    bool isPalindrome(string s){
        int left = 0;
        int right = s.length()-1;

        while(left<right){
            if(s[left] != s[right]){
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
    int removePalindromeSub(string s) {
        if(isPalindrome(s) == true){
            return 1;
        }

        return 2;
    }


};
