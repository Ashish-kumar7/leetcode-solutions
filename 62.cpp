class Solution {
public:
    int uniquePaths(int m, int n) {
        
        int A[m][n];
        for(int i=0;i<n;i++)
        {
            
            A[0][i]=1;
        }
         for(int i=0;i<m;i++)
        {
            
            A[i][0]=1;
        }   
        
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                A[j][i]=A[j-1][i]+A[j][i-1];
            }
        }
        
        return A[m-1][n-1];
    }
};