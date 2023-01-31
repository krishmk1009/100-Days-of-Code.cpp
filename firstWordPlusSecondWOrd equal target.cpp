class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        
        int firstSum = 0;
        int secondSum =0;
        int thirdSum =0;


        for(int i = 0 ; i<firstWord.length() ; i++){
            int temp = firstWord[i] -97;

            firstSum = firstSum*10 + temp;

        }
        for(int i = 0 ; i<secondWord.length() ; i++){
            int temp = secondWord[i] -97;

            secondSum = secondSum*10 + temp;

        }
         for(int i = 0 ; i<targetWord.length() ; i++){
            int temp = targetWord[i] -97;

            thirdSum = thirdSum*10 + temp;

        }

        if(firstSum + secondSum == thirdSum){
            return true;
        }

        return false;
    }
};
