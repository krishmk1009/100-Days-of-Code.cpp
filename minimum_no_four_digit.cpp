class Solution {
public:
    int minimumSum(int num) {
        string str = to_string(num);

        sort(str.begin() , str.end());

        // int first =stoi( str[0]+str[2]);
        // int second = stoi(str[1]+str[3])

        string first = "";
        first += str[0];
        first +=str[2];
        string second = "";
        second += str[1];
        second +=str[3];
    

        return stoi(first) + stoi(second);
    }
};
