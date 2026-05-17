class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_set<char> st;
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                if(st.count(board[i][j])) return false;
                st.insert(board[i][j]);
            }
        }
        for(int j=0;j<9;j++){
            unordered_set<char> st;
            for(int i=0;i<9;i++){
                if(board[i][j]=='.'){
                    continue;
                }
                if(st.count(board[i][j])) return false;
                st.insert(board[i][j]);
            }
        }
        for (int row = 0; row < 9; row += 3) {
            for (int col = 0; col < 9; col += 3) {

                unordered_set<char> st;

                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {

                        char val = board[row + i][col + j];
                        if (val == '.') continue;

                        if (st.count(val)) return false;
                        st.insert(val);
                    }
                }
            }
        }
        return true;
    }
};