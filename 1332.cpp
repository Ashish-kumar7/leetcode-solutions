class Solution {
public:
    int removePalindromeSub(string s) { 
        if(s.length()==0){
            return 0;
        }
        int n=s.length()-1;
        int i=0;
        bool a=true;
        while(i<n){
            if(s[i++]!=s[n--]){
                  a=false;
                break;
               }
        }
        if(a){
            return 1;
        }
        else {
            return 2;
        } 
    }
};