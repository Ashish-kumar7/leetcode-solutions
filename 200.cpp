class Solution {
public:
    
    int n;
    int m;
    int visited[1000][1000];
    
    void dfs(int r,int s,vector<vector<char>>&A)
    {
        if(r<0 ||r>=n ||  s<0 || s>=m)
        {
            return;
        }
        if(A[r][s]=='0' || visited[r][s]==1)
        {
            return ;
        }
        
        visited[r][s]=1;
        
        dfs(r+1,s,A);
        dfs(r-1,s,A);
        dfs(r,s+1,A);
        dfs(r,s-1,A);
        
    }

    int numIslands(vector<vector<char>>& A) {
        
         n=A.size();
        
                
        if(n==0)
        {
            return 0;
        }
        
        
         m=A[0].size();
        
        cout<<n<<" "<<m<<" ";
        for(int i = 0; i < n; i++){
            for(int j=0;j<m;j++)
            {
                visited[i][j]=0;
            }
            
        }
        
    
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(A[i][j]=='1' && visited[i][j]==0)
                {   
                    count++;
                    dfs(i,j,A);
                }
            }
        }
        
        return count;
    }
};