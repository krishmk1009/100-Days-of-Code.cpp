49. Group Anagrams
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        

        vector<string>temp;
        temp=strs;

        for(int i=0;i<temp.size();i++){

           sort(temp[i].begin() , temp[i].end());
            
        }

        vector<vector<string>>ans;
        
        for(int i=0;i<temp.size() ; i++){
            string check = temp[i];
            vector<string>str;
            if(strs[i] == "ABC"){
                continue;
            }

            for(int j=i; j<temp.size() ; j++){
                if(check == temp[j]){
                   str.push_back(strs[j]);
                   strs[j]= "ABC";
                }
            }

            ans.push_back(str);
            
        }

      for(auto it:temp){
          cout<<it<<" ";
      }

      return ans;
    }
};
