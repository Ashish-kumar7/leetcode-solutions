class Solution {
public:
    int lengthOfLIS(vector<int>& A) {
        int n=A.size();
        if(n==0){
            return 0;
        }
        int B[n];
        for(int i=0;i<n;i++){
            B[i]=1;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(A[j]<A[i]){
                    B[i]=max(B[j]+1,B[i]);
                }
            }
        }
        sort(B,B+n);
    return B[n-1];
        }
};