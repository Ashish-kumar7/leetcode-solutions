class Solution {
public:
    int minOperations(int n) {
       
        int A[n];
        
        for(int i=0;i<n;i++){
            A[i]=(2 * i) + 1;
        }
        
        int val=A[0]+A[n-1];
        
        val=val/2;
        
        int ans=0;
        
        for(int i=0;i<n/2;i++){
            ans+=(val-A[i]);    
        }
        return ans;
    }
};