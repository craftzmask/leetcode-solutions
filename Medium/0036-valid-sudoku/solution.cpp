class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> squares(9);

        const int n = board.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                const char c = board[i][j];
                if (c == '.') {
                    continue;
                }

                const auto index = 3 * (i / 3) + (j / 3);
                if (rows[i].count(c) || cols[j].count(c) || squares[index].count(c)) {
                    return false;
                }

                rows[i].insert(c);
                cols[j].insert(c);
                squares[index].insert(c);
            }
        }

        return true;
    }
};