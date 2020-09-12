class Solution {
public:
    int climbStairs(int n){
        int A[n+1];
        A[0]=1;
        A[1]=1;
        for(int i=2;i<=n;i++)
        {
            A[i]=A[i-1]+A[i-2];
        }
        int p=A[n];
        return p;
    }
};