class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& A) {
        for(int i=0;i<A.size();i++)
        {
            int x=abs(A[i]);
            if(A[x-1]>0)
            {
                A[x-1]=((A[x-1])*(-1));
            }
        }
        vector<int>B;
        
        for(int i=0;i<A.size();i++)
        {
            if(A[i]>0)
            {
               B.push_back(i+1); 
            }
        }
        
        return B;
        
    }
};