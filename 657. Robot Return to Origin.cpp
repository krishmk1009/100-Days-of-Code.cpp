class Solution {
public:
    bool judgeCircle(string moves) {
        int vertical = 0, horizontal = 0;
        for (int i = 0; i < moves.size(); ++i) {
            switch(moves[i]) {
                case 'L':
                    horizontal--;
                    break;
                case 'R':
                    horizontal++;
                    break;
                case 'U':
                    vertical++;
                    break;
                case 'D':
                    vertical--;
                    break;
                default:
                    break;
            }
        }
        return vertical == 0 && horizontal == 0;
    }
};
