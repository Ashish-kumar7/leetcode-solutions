class Solution {
public:
    string defangIPaddr(string address) {
        int n=address.size();
         vector<char>A;
        for(int i=0;i<n;i++)
        {
            if(address[i]!='.')
            {   
                int kk=address[i];
                A.push_back(kk);
            }
           else if(address[i]=='.')
            {
                A.push_back('[');
                A.push_back('.');
                A.push_back(']');
                             
            }
        }
        string s;
        for(int j=0;j<(A.size());j++)
            {
                 s+=A[j];              
            }
        return s;                   
    }
};