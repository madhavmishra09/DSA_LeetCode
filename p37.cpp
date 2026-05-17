class Solution {
public:
    vector<unordered_set<char>> row, col, box;

    bool solve(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {

                if(board[i][j] == '.') {

                    for(char num = '1'; num <= '9'; num++) {

                        int boxIndex = (i/3)*3 + (j/3);

                        if(row[i].count(num) == 0 &&
                           col[j].count(num) == 0 &&
                           box[boxIndex].count(num) == 0) {

                            // place
                            board[i][j] = num;
                            row[i].insert(num);
                            col[j].insert(num);
                            box[boxIndex].insert(num);

                            // recurse
                            if(solve(board)) return true;

                            // backtrack (undo)
                            board[i][j] = '.';
                            row[i].erase(num);
                            col[j].erase(num);
                            box[boxIndex].erase(num);
                        }
                    }

                    return false; // no number worked
                }
            }
        }
        return true; // solved
    }

    void solveSudoku(vector<vector<char>>& board) {

        row.resize(9);
        col.resize(9);
        box.resize(9);

        // pre-fill sets
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(board[i][j] != '.') {
                    char num = board[i][j];
                    row[i].insert(num);
                    col[j].insert(num);
                    box[(i/3)*3 + (j/3)].insert(num);
                }
            }
        }

        solve(board);
    }
};