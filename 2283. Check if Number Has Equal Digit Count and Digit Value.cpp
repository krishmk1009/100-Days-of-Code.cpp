class Solution {
public:
    bool digitCount(string num) {
        
        for(int i = 0;i<num.length() ; i++){

            int temp = num[i] -48;
            int tempCount =0;

            for(int j =0;j<num.length() ; j++){

                int anTemp = num[j]-48;
                if(anTemp == i){
                    tempCount++;
                }
            }

            if(tempCount !=temp){
                return false;
            }
        }

        return true;
    }
};
