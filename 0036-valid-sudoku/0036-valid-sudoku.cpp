class Solution {
public:
    bool isSafe(vector<vector<char>>& board,int row,int col){
        for(int i=0; i<9; i++){
            if(board[row][col]==board[row][i] && i!=col){
                return false;
            }
        }

        for(int i=0; i<9; i++){
            if(board[row][col]==board[i][col] && i!=row){
                return false;
            }
        }

        int str=(row/3)*3;
        int stc=(col/3)*3;
        for(int i=str; i<=str+2; i++){
            for(int j=stc; j<=stc+2;j++){
                if(board[i][j]==board[row][col]&& (row!=i|| col!=j)){
                    return false;
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int row=0; row<9; row++){
            for(int col =0; col<9; col++){
                if(board[row][col]!='.'&&(!isSafe(board, row, col))){
                    return false;
                }
            }
        }
        return true;
    }
};