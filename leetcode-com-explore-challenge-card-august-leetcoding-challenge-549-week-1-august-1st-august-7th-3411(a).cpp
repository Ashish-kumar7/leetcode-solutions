class Solution {
public:
    bool isPalindrome(string s) {
    if(s.length()==0){
        return true;
    }
    int i=0,j=s.length()-1;
    while(i<=j){
        if((s[i]>=48 and s[i]<=57) or (s[i]>=65 and s[i]<=90) or (s[i]>=97 and s[i]<=122)){
            if((s[j]>=48 and s[j]<=57) or (s[j]>=65 and s[j]<=90) or (s[j]>=97 and s[j]<=122)){
                if(s[i]>=48 and s[i]<=57){
                    if(s[i]==s[j]){
                        i++;
                        j--;
                    }else{
                        return false;
                    }
                }
                else if((s[i]>=65 and s[i]<=90) or (s[i]>=97 and s[i]<=122)){
                    if(s[i]==s[j] or s[i]+32==s[j] or s[i]==s[j]+32){
                        i++;
                        j--;
                    }
                    else{
                        return false;
                    }
                }
                
            
            }
             else{
                j--;
            }
        }else{
            i++;
        }
    }
    if(i>j){
        return true;
    }else{
        return false;
    }

     
}
};