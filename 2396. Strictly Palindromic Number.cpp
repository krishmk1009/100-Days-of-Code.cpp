class Solution {
public:

bool isPalindrome(string str){
    int start = 0;
    int end = str.length()-1;

    while(start<end){
        if(str[start] !=str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
    bool isStrictlyPalindromic(int n) {
        if (n == 1) {
            return true;
        }
        // check base 2 separately
        if ((n & (n - 1)) == 0) {
            return false;
        }
        for(int i =2 ; i<n ; i++ ){

            string result = "";
            int temp = n;

            while(temp>0){
                int digit = temp%i;
                temp/=i;
                result = to_string(digit) + result;
            }


            if(!isPalindrome(result)){
                return false;
            }



        }
        return true;
    }
};
