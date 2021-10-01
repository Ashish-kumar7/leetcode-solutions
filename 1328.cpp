class Solution {
public:
    string breakPalindrome(string palindrome) {
        
        if(palindrome.size()==1){
            return "";
        }
        
        if(palindrome.length()%2==0){
                int i;
                for( i=0;i<palindrome.length();i++){
                    if(palindrome[i]!='a'){
                        palindrome[i]='a';
                        return palindrome;
                    }
                }
                if(i==palindrome.length()){
                    palindrome[palindrome.length()-1]='b';
                    return palindrome;
                }
        }
        else{
            int i;
                for( i=0;i<palindrome.length();i++){
                    if(i!=(palindrome.length()/2) && palindrome[i]!='a'){
                        palindrome[i]='a';
                        return palindrome;
                    }
                }
             palindrome[palindrome.length()-1]='b';
            return palindrome;
               
        }
        
        return  palindrome;
    }
};