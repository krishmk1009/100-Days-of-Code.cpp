17. Letter Combinations of a Phone Number
class Solution {
public:
    void solve(string digits , string mapping[] , int index , string output , vector<string>&ans){


        //base condition 
        if(index >=digits.length()){
            ans.push_back(output);
            return;
        }

        int number  = digits[index]-'0';
        string value = mapping[number];
        for(int i=0 ;i<value.length() ; i++){
            output.push_back(value[i]);
            solve(digits,mapping,index+1,output,ans);
            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        string mapping[] = {"","","abc" ,"def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string output="";

        int index = 0;
        vector<string>ans;

        if(digits.length()==0){
            return ans;
        }



        solve(digits,mapping,index,output,ans);

        return ans;
    }
};
