class Solution {
public:
    int surfaceArea(vector<vector<int>>& A) {
        
        int m=A.size();
        int n=A[0].size();
        
        int sum=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                sum+=A[i][j];
            }
        }
        
        sum=sum*6;
    //    cout<<sum<<" ";
        int sum1=0;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(A[i][j]<A[i][j+1])
                {
                    sum1+=(A[i][j]);
                }
                else
                {
                    sum1+=(A[i][j+1]);
                }
            }
        }
        
        
         int sum2=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(A[j][i]<A[j+1][i])
                {
                    sum2+=(A[j][i]);
                }
                else
                {
                    sum2+=(A[j+1][i]);
                }
            }
        }
     //   cout<<sum2<<" ";
        
        int sum3=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {   
                if(A[i][j]>1)
                sum3=sum3+((A[i][j]-1));
            }
        }
        
       // cout<<sum3<<" ";
            int x=sum1+sum2+sum3;
        
        int y=2*x;
        
        int l=sum-y;
        
        
        return l;
     
    }
};