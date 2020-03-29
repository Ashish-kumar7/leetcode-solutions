class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        if(trust.size()==NULL){
            return 1;
        }
        int A[N+2][N+2];
        for(int i=0;i<N+1;i++){
            for(int j=0;j<N+1;j++){
                A[i][j]=0;
            }
        }
        for(int i=0;i<trust.size();i++){
                int x=trust[i][0];
                int y=trust[i][1];
                A[x][y]=1;
        }
        int sum;
        for(int i=0;i<N+1;i++){   
            sum=0;
            for(int j=0;j<N+1;j++){
                sum+=A[i][j];
            }
            A[i][N+1]=sum;
        }
        int sum1;
        for(int i=0;i<N+1;i++){   
            sum1=0;
            for(int j=0;j<N+1;j++){
                sum1+=A[j][i];
            }
            A[N+1][i]=sum1;
        }
        int mark;
       for(int k=0;k<N+1;k++){
           if(A[N+1][k]==(N-1)){
               mark=k;
               break;
           }
       }
        if(A[mark][N+1]==0){
            return mark;
        }
        return -1;
    }
};