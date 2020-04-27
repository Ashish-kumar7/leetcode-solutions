class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int a=matrix.size();
        if(a==0){
            return 0;
        }
        int b=matrix[0].size();
        if(a==0 || b==0){
            return 0;
        }
        int A[a+1][b+1];
        for(int i=0;i<a+1;i++){
            A[i][0]=0;
        }
        for(int j=0;j<b+1;j++){
            A[0][j]=0;
        }
        int max_val=0;
        for(int i=1;i<a+1;i++){
            for(int j=1;j<b+1;j++){
                if(matrix[i-1][j-1]=='1'){
                    A[i][j]=min( A[i][j-1] , min ( A[i-1][j-1],A[i-1][j])  ) +1;
                    
                    if(max_val<A[i][j]){
                        max_val=A[i][j];
                    }
                }
              else if(matrix[i-1][j-1]=='0'){
                    A[i][j]=0;
                }
            }
        }
        return max_val*max_val;
    }
};