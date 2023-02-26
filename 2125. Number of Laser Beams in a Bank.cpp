class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
    
        vector<int>store;



        for(int i=0;i<bank.size() ;i++){
            int beam=0;
            for(int j=0;j<bank[i].length() ; j++){
                if(bank[i][j]=='1'){
                    
                    beam++;
                }
            }
            store.push_back(beam);
        }
        int prevCount=0;
        for(int i=0;i<store.size() ;i++){
                if(store[i] ==0){
                    continue;
                }
                ans += prevCount*store[i];
                prevCount = store[i];



        }
        return ans;
    }
};
