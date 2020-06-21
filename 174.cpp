class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int r=dungeon.size();
        int c=dungeon[0].size();
        vector<vector<int>>A(r,vector<int>(c));
        A[r-1][c-1] = dungeon[r-1][c-1] > 0 ? 1 : 1-dungeon[r-1][c-1];
        for(int i=r-2;i>=0;i--){
            A[i][c-1]=max(1,A[i+1][c-1] - dungeon[i][c-1] );
        }
        for(int i=c-2;i>=0;i--){
            A[r-1][i]=max(1,A[r-1][i+1] - dungeon[r-1][i] );
        }
        for(int i=r-2;i>=0;i--){
            for(int j=c-2;j>=0;j--){
                A[i][j]= max( min(A[i+1][j],A[i][j+1] ) - dungeon[i][j] , 1 ) ;
            }
        }
        return A[0][0];
    }
};