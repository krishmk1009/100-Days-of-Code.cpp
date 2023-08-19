class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> hashSet;

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (board[i][j] != '.') {
        string key = "row" + to_string(i) + board[i][j];
        if (!hashSet.insert(key).second) {
          return false;
        }

        key = "col" + to_string(j) + board[i][j];
        if (!hashSet.insert(key).second) {
          return false;
        }

        key = "box" + to_string(i / 3) + to_string(j / 3) + board[i][j];
        if (!hashSet.insert(key).second) {
          return false;
        }
      }
    }
  }

  return true;
    }
};
