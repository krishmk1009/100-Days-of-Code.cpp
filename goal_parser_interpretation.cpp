class Solution {
public:
    string interpret(string command) {
        string ans ="";
        int i =0;
        while(i<command.length()){

            if(command[i] == 'G'){
                ans+= "G";
                i++;
            }

            if(command[i] =='(' && command[i+1] ==')' ){
                ans+= 'o';
                i+=2;
            }

            else if (command[i] =='(' && command[i+1] =='a'){
                ans+= "al";
                i+=4;
            }
        }
        return ans;
    }
};
