class Solution {
public:
    bool isPalindrome(int x) {

        long long newNum = 0;
    if(x <0){
        return false;
    }
        long long temp = x;

        while(temp!=0){
            long long digit = temp%10;

            newNum = newNum*10+digit;
            temp=temp /10;
        }


       if(newNum == x){
           return true;
       }
       return false; 
    }
};
