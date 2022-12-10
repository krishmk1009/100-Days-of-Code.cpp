class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int ch = coordinates[0]-'a' +1;
        cout<<ch;
        int n = int(coordinates[1]) -48;

        if(ch%2 ==1 && n%2==1){
            return false;
        }

        else if(ch%2 ==0 && n%2==0){
            return false;
        }

        return true;
    }
};
