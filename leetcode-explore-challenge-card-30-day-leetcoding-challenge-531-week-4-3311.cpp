class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int a=text1.length();
        int b=text2.length();
        
        int A[a+1][b+1];
        
        for(int i=0;i<=a;i++){
            for(int j=0;j<=b;j++){
                if(i==0 || j==0){
                    A[i][j]=0;
                }
                else if(text1[i-1]==text2[j-1]){
                    A[i][j]=1+A[i-1][j-1];
                }
                else{
                    
                    A[i][j]=max(A[i-1][j],A[i][j-1]);
                }
            }
        }
        return A[a][b];
    }
};