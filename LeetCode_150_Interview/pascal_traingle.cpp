class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows<=0){
            return {};
        }
        vector<vector<int>>ans;
        ans.push_back({1});
        int prevIndex =0;
        for(int i=2;i<=numRows ; i++){
            vector<int>temp;
            for(int j=0 ; j<i ; j++){
               if(j==0 || j==i-1 ){
                   temp.push_back(ans[prevIndex][0]);
               }

               else{
                   int element = ans[prevIndex][j-1] + ans[prevIndex][j];
                   temp.push_back(element);
               }
            }

            ans.push_back(temp);
            prevIndex++;
        }

        return ans;
    }
};
