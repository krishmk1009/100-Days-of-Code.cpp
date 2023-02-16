class Solution {
public:
    int maximumValue(vector<string>& strs) {
       int ans = 0;

       for(int i = 0 ; i<strs.size() ; i++){
           bool isNumber= false;
           bool isChar = false;
           string temp = strs[i];

           for(int j=0;j<temp.length();j++){

               

               if(temp[j] >='a' && temp[j] <='z'){
                   isChar = true;
               }
                if(temp[j] >='0' && temp[j] <='9'){
                   isNumber = true;
               }
               if((isNumber== true && isChar==true) || isChar==true){
                  
                   if(ans>temp.length()){
                       ans =ans;
                   }
                   else{
                       ans=temp.length();
                   }
                   break;
               }
           }

            if(isNumber == true && isChar == false){
                ans= max(ans, stoi(temp));
            }
            

       }


return ans;

    }
};
