class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int len=s.length();
        for(int i=len/2;i>=1;i--){
            string final="";
            if(len%i==0){
                string temp=s.substr(0,i);
                
                for(int j=0;j<len/i;j=j+1){
                    final+=temp;
                }
            }
            if(final==s){
                return 1;
            }
        }
        return 0;
    }
};