class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        vector<string> str;
        int i = 0;
    string temp = "";
        while(i<s.length()){

            if(s[i]!=' '){
                temp+= s[i];

            }

            
           
            else{
                str.push_back(temp);
                temp="";
            }


            i++;

        }
        str.push_back(temp);

       
        for(int j = 0 ; j<str.size() ; j++){


            
            string temp = str[j];
            reverse(temp.begin() , temp.end());
            ans+=temp;
            if(j!=str.size()-1){
                ans+= ' ';
            }
            
            
        }

        return ans;
    }
};
