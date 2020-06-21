void dfs(vector<vector<char>>&grid,int i,int j){
    if(grid[i][j]=='O'){
        grid[i][j]='1';
        if(i+1 < grid.size()){
            dfs(grid,i+1,j);
        }
        if(i > 1){
            dfs(grid, i-1, j);
        }
        if(j+1 < grid[i].size()) {
            dfs(grid, i, j+1);
        }
        if(j > 1) {
            dfs(grid, i, j-1);
        }
    }
}
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if(board.size()==0){
            return;
        }
        int col=board[0].size();
        int row=board.size();
        for(int i=0;i<row;i++){
            dfs(board,i,0);
            dfs(board,i,col-1);
        }
        for(int j=1;j<col-1;j++){
            dfs(board,0,j);
            dfs(board,row-1,j);
        }
         for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
             if(board[i][j]=='1'){
                    board[i][j]='O';
                }
            }
        }
    }
};