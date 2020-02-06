class Solution {
public:
    int maximum69Number (int num) {
       vector<int>A;
        while(num!=0)
        {
            int ll;
            ll=num%10;
            if(ll!=0)
            {
             A.push_back(ll);               
            }
            num=num/10;

        }
        int m;
        m=A.size();
        for(int i=m-1;i>=0;i--)
        {
            if(A[i]==6)
            {
                A[i]=9;
                break;
            }
        }
        
        int k=0;
        int ss=m;
        int hh=1;
        for(int j=m-1;j>=0;j--)
        {
            int vv=pow(10,(ss-hh));
            k=k+(A[j]*vv);
            hh=hh+1; 
        }
        
        return k;
        
    }
};