2678. Number of Senior Citizens
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;

        for(int i =0;i<details.size() ; i++){

            int index= details[i].size()-4;
            string age;
            int k = 2;
           while(k--){
            age+=details[i][index++];

           }
          int convert = stoi(age);
          if(convert>60){
              ans++;
          }
        }

        return ans;
    }
};
