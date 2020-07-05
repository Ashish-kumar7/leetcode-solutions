class Solution {
public:
    int nthUglyNumber(int n) {
        if(n<=0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        int dp[n+1];
        dp[0]=1;
        int k2=0;
        int k3=0;
        int k5=0;
        for(int i=1;i<n;i++){
            dp[i]=min( dp[k2]*2 ,min(dp[k3]*3 ,dp[k5]*5)  );
            
            if(dp[i]==dp[k2]*2){
                k2++;
            }
            if(dp[i]==dp[k3]*3){
                k3++;
            }
            if(dp[i]==dp[k5]*5){
                k5++;
            }
        }
        return dp[n-1];
    }
};