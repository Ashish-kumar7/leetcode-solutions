class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int n=s.length();
        int m =t.length();
        int i,j;
        for(i=0,j=0;i<n && j<m;)
        {
            if(s[i]!=t[j])
            {
               // i++;
                j++;
            }
            else if(s[i]==t[j])
            {
                j++;
                i++;
            }  
            
        }
        
        if(i==n)
        {
            return 1;
        }
        
        
      return   0;
        
    }
};