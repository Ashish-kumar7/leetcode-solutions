class Solution {
public:
    int minSteps(string s, string t) {
        
        int n=s.length();
        
        int A[26]={0};
        for(int i=0;i<n;i++)
        {   
             int oo=s[i]-'a';
             A[oo]++;
        }
        int count=0;
        for(int i=0;i<n;i++)
        {   
            int h=t[i]-'a';
            A[h]--;
            if(A[h]<0){
                count++;
            }
        }
        return count;
        
    }
};