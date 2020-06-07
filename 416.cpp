class Solution {
public:
    bool canPartition(vector<int>& A) {
        int sum=0;
        int n=A.size();
        for(int i=0;i<A.size();i++){
            sum+=A[i];
        }
        if(sum%2!=0){
            return 0;
        }
        sum=sum/2;
        int dp[n+1][sum+1];
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int i=0;i<=sum;i++){
            dp[0][i]=0;
        }
        dp[0][0]=1;
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(A[i-1]<=j){
                    dp[i][j]=dp[i-1][j-A[i-1]] || dp[i-1][j];
                }
                else {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
};