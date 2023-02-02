class Solution {
public:
    bool checkString(string s) {
     int a=0;
     int b=-1;


     for(int i =0;i<s.length() ; i++){
         if(s[i]=='a'){
             a=i;
         }

         if(b==-1){
             if(s[i]=='b'){
                 b=i;
             }
         }
     }
     if(a<b ||  a==0 || b==-1){
         return true;
     }   
     return false;
    }
};
