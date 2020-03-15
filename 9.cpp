class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }
        string s=to_string(x);
        int l=s.length();
        for(int i=0;i<l;i++){
            if(s[i]!=s[l-i-1]){
                return 0;
            }
        }
        return 1;
    }
};