class Solution {
public:
    bool halvesAreAlike(string s) {
        string f = s.substr(0,(s.length()/2));
        string se = s.substr((s.length()/2) , (s.length()/2));
        int count1 = 0;
        int count2 = 0;

        for(int i = 0 ; i<f.length() ; i++){
            if(f[i] ==  'a'||  f[i] == 'e'||f[i] ==  'i'||f[i] ==  'o'||f[i] ==  'u'||
            f[i]      == 'A'||f[i] ==  'E'||f[i] ==  'I'||f[i] ==  'O'||f[i] ==  'U'){
                count1++;
            }
        }
        for(int i = 0 ; i<se.length() ; i++){
            if(se[i] ==  'a'||  se[i] == 'e'||se[i] ==  'i'||se[i] ==  'o'||se[i] ==  'u'||
            se[i]      == 'A'||se[i] ==  'E'||se[i] ==  'I'||se[i] ==  'O'||se[i] ==  'U'){
                count2++;
            }
        }

        if(count1==count2){
            return true;
        }
        return false;
    }
};
