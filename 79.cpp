class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(word[0]==board[i][j] && dfs(board,i,j,0,word)){
                    return 1;
                }
            }
        }
        return 0;
    }
    bool dfs(vector<vector<char>>& board,int i,int j,int count,string word){
        if(count==word.length()){
            return 1;
        }
        if(i<0 || j<0 || i>=board.size() || j>=board[i].size() || board[i][j]!=word[count]){
            return 0;
        }   
        char temp=board[i][j];
        board[i][j]='*';
        
        bool found=dfs(board,i+1,j,count+1,word) || dfs(board,i-1,j,count+1,word) || dfs(board,i,j+1,count+1,word) || dfs(board,i,j-1,count+1,word);
        board[i][j]=temp;
        
        return found;
        
        
    }
    
    
    
    
};