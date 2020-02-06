class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
     vector<int>B;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]%2==0)
            {
            B.push_back(A[i]);                
            }
        }
        for(int i=0;i<A.size();i++)
        {
            if(A[i]%2!=0)
            {
            B.push_back(A[i]);                
            }
        }
        
        return B;
        
        
        
        
    }
    
    
    
    
    
};