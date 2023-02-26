class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        int prevBeam = 0;
        
        for(int i=0;i<bank.size() ;i++){
            
            int beam=0;
            for(int j=0;j<bank[i].length() ; j++){
                if(bank[i][j]=='1'){
                   beam++;
                }
            }
            
            if(beam ==0){
                continue;
            }
            ans+= prevBeam*beam;
            prevBeam = beam;

        }
        
        return ans;
    }
};
