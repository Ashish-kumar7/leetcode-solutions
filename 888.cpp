class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int sum1=0;
        int sum2=0;
        for(int i=0;i<A.size();i++)
        {
            sum1=sum1+A[i];
        }
        for(int i=0;i<B.size();i++)
        {
            sum2=sum2+B[i];
        }
        int delta=(sum1-sum2)/2;
        
        map<int,int>C;
        int key;
        for(int i=0;i<B.size();i++)
        {
            key=B[i];
            C[key]++;
        } 
        vector<int>MM;
        map<int,int> :: iterator it;
        int lmp;
        for(int i=0;i<A.size();i++)
        {  
                int jj=A[i];
                 int kk=jj-(delta);
                if(C.find(kk)!=C.end())
                {   
                    MM.push_back(jj);
                    MM.push_back(kk);
                    break;
                }
        }
        return MM;  
    }
};