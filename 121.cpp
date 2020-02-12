class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        if(n==0)
        {
            return 0;
        }
        int A[n];
        
        A[n-1]=prices[n-1];
        
        for(int i=n-1;i>0;i--)
        {
           int p=A[i];
            
            if(prices[i-1]>=p)
            {
                A[i-1]=prices[i-1];
            }
            else 
            {
                A[i-1]=p;
            }
        }
        
        int max=0;
        for(int i=0;i<n;i++)
        {
            if((A[i]-prices[i])>=max)
            {
                max=A[i]-prices[i];
            }
        }
        
        return max;
        
    }
};