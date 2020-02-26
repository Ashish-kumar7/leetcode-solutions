class Solution {
public:
    bool judgeSquareSum(int c) {
        
        int h=sqrt(c);
        for(int i=0;i<=h;i++)
        {
            int ll=c-(i*i);
            int mm=sqrt(ll);
            cout<<mm<<endl;
            double nn=sqrt(ll);
            if(nn==(int)mm)
            {
                return 1;
            }
        }
       return 0; 
        
    }  
};