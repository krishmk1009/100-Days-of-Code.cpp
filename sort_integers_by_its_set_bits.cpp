class Solution {
public:

static bool myCompare(int i , int j){
    int bits_i = __builtin_popcount(i);
    int bits_j = __builtin_popcount(j);

    if(bits_i==bits_j){
        return i<j;
    }
    return bits_i<bits_j;
}
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin() , arr.end() , myCompare);
        return arr;
        
    }
};
