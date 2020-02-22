class Solution {
public:
    int numTrees(int n) {
      
        int A[n+1];
        A[0]=1;
        A[1]=1;
       // A[2]=2;
            for(int j=2;j<=n;j++)
        {   
            int count=0;
            for(int i=0;i<j;i++)
            {
                count+=(A[i]*A[j-1-i]);
            }
            A[j]=count;
            
        }  
        
        return A[n];
        
    }
};