int dp[1000005];
    
     int static solve(int n){
        if(n==1)return 0;
        if(n%2==0)return dp[n]=( 1+ solve(n/2) );
        else return dp[n]=( 1+ solve(3*n +1) ) ;
    }
    
     bool static comp(int a,int b){
        if(solve(a)==solve(b))return a<b;
        return solve(a)<solve(b);
    }

class Solution {
public:
    int getKth(int lo, int hi, int k) {
        
    for(int i=0;i<1000005;i++)dp[i]=0;
        
        vector<int>A;
        for(int i=0;i<hi-lo+1;i++)A.push_back(lo+i);
        
        sort(A.begin(),A.end(),comp);
        
        return A[k-1];
    }
};