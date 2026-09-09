class Solution {
public:
    int rowMask[9] = {};
    int colMask[9] = {};
    int boxMask[9] = {};

    bool helper(vector<vector<char>>& board, int idx) {
        if (idx == 81)
            return true;

        int row = idx / 9;
        int col = idx % 9;

        if (board[row][col] != '.')
            return helper(board, idx + 1);

        int box = (row / 3) * 3 + (col / 3);

        for (int d = 0; d < 9; d++) {
            int bit = 1 << d;

            if ((rowMask[row] & bit) ||
                (colMask[col] & bit) ||
                (boxMask[box] & bit))
                continue;

            board[row][col] = '1' + d;

            rowMask[row] |= bit;
            colMask[col] |= bit;
            boxMask[box] |= bit;

            if (helper(board, idx + 1))
                return true;

            rowMask[row] ^= bit;
            colMask[col] ^= bit;
            boxMask[box] ^= bit;

            board[row][col] = '.';
        }

        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        // Initialize masks
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    int d = board[i][j] - '1';
                    int bit = 1 << d;

                    rowMask[i] |= bit;
                    colMask[j] |= bit;
                    boxMask[(i / 3) * 3 + (j / 3)] |= bit;
                }
            }
        }

        helper(board, 0);
    }
};