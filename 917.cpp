class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.length();
        int count=0;
        
        
        for(int i=0;i<n;i++){
            
            if( (s[i]<='Z' && s[i]>='A') || (s[i]<='z' && s[i]>='a') ){
                count++;
            }
        }
        
        int i=0;
        int j=n-1;
        
        
    while(i<j  && count>0){
        if( ((s[i]<='Z' && s[i]>='A') || (s[i]<='z' && s[i]>='a') ) && ((s[j]<='Z' && s[j]>='A') || (s[j]<='z' &&                       s[j]>='a'))){
                swap(s[i],s[j]);
                count--;
                i++;
                j--;
        }
         if( (s[i]<'A') || (s[i]>'z') || (s[i]<'a' && s[i]>'Z') ){
            i++;
        }
         if( (s[j]<'A') || (s[j]>'z') || (s[j]<'a' && s[j]>'Z') ){
            j--;
        }
    }
        return s;
    }
};