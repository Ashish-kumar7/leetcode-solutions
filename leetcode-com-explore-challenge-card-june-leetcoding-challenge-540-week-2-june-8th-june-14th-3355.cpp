class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.length();
        int m=t.length();
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){  
                if(i==0 || j==0){
                    dp[i][j]=0;
            }
               else if(s[i-1]==t[j-1]){
                    dp[i][j]=dp[i-1][j-1] +1 ;
                }
                else {
                    dp[i][j]=max(dp[i-1][j] , dp[i][j-1] );        
             }        
             }
        }
        if(dp[n][m]==s.length()){
            return 1;
        }
            return 0;                
        }
};