class Solution {
public:
    bool isValid(string s) {
        int i=0;
        stack<char>S;        
        
        while(i!=s.length()){
             if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                S.push(s[i]); 
             }
             else if(s[i]==')' || s[i]=='}' || s[i]==']'){  
                if(S.empty()){
                    return 0;
                }
                char z=S.top();
                S.pop();
                if( ( s[i]==')' && z!='(' ) || ( s[i]=='}' && z!='{' ) || ( s[i]==']' && z!='[' ) ){
                    return 0;
                }
            }
                i++;
        }
        
        if(S.empty()){
            return 1;
        }
        return 0;
    }
};