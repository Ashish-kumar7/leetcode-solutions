class Solution {
public:
    int countVowelStrings(int n) {
        int mat[n+1][5];
        
        for(int i=0;i<5;i++){
            mat[0][i]=1;
        }
        for(int i=0;i<=n;i++){
            mat[i][4]=1;
        }
        
        for(int i=1;i<=n;i++){
            for(int j=3;j>=0;j--){
                mat[i][j]=mat[i-1][j] + mat[i][j+1];
            }
        }
      
        
        return mat[n][0];
    }
};