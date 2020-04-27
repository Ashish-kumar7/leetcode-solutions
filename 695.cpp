class Solution {
public:
    int n,m;
    void bfs(int i,int j,int & count,vector<vector<int>>& A){
    if(i<0 || j<0 || i>=n || j>=m || A[i][j]==0){
        return ;
    }
    A[i][j]=0;
    count++;
    bfs(i+1,j,count,A);
    bfs(i,j+1,count,A);
    bfs(i-1,j,count,A);
    bfs(i,j-1,count,A);        
}
    int maxAreaOfIsland(vector<vector<int>>& AA) {
        n=AA.size();
        m=AA[0].size();
        vector<int>X;
        int count;
        for(int i=0;i<AA.size();i++){
	        for(int j=0;j<AA[0].size();j++){
	            if(AA[i][j]==1){
	                count=0;
	                bfs(i,j,count,AA);
	                X.push_back(count);
	            }
	        }
	    }
        if(X.size()==0){
            return 0;
        }
        sort(X.begin(),X.end(),greater<int>());
        return X[0];
    }
};