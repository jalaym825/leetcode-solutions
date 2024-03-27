class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       vector<set<int>> row(9), col(9), grid(9);
       for(int i = 0; i < 9; i++) {
           for(int j = 0; j < 9; j++) {
               if(board[i][j] == '.') continue;
               int cur = board[i][j] - '0';
               if(row[i].count(cur)||col[j].count(cur)||grid[(i/3)*3+j/3].count(cur)) return false;
               row[i].insert(cur);
               col[j].insert(cur);
               grid[(i/3)*3+j/3].insert(cur);
           }
       }
       return true;
    }
};