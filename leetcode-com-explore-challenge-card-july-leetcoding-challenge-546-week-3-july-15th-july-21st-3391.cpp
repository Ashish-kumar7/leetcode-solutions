class Solution {
public:
    string reverseWords(string s) {
        int start,end;
        int k;
        for ( k = 0; k < s.size() && ' ' == s[k]; k++){
            ;
        }
        start = k;
        for ( k = s.size() - 1; k >= 0 && ' ' == s[k]; k--){
            ;
        }
        end = k;
        int len;
        
        for ( k = start, len = 0; k <= end; k++) {
            if (' ' == s[k] && ' ' == s[k - 1])
                continue;
            s[len++] = s[k];
        }
        s.erase(s.begin() + len, s.end());
        
        reverse(s.begin(),s.end());
        int n=s.length();
        int pos=0;
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                reverse(s.begin()+pos,s.begin()+i);
                pos=i+1;
            }
        }
        reverse(s.begin() + pos, s.end());
        return s;
    }
};