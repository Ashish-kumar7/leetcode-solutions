class Solution {
public:
    int smallestRangeI(vector<int>& A, int k) {
        sort(A.begin(),A.end());
        if(A.size()==0)
        {
            return 0;
        }
        
        
        else if(A.size()!=0){
            
        int y=A.front();
        int yy=A.back();
        int kk=yy-y;
            int ll=2*k;
            if(kk-ll<=0)
            {
                return 0;
            }
            else 
            {
                return kk-ll;
            }
            
            
        }
        
      return 0;  
        
    }
};