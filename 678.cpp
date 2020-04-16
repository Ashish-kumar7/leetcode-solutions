class Solution {
public:
    bool checkValidString(string s) {
        stack<int> s1, s2;
        int i=0;

        for( auto c: s) {
            if(c == '(') s1.push(i);
            else if(c == '*') s2.push(i);
            else {
                if(s1.empty() && s2.empty()) return false;
                else { 
                    if(!s1.empty()) s1.pop();
                    else s2.pop();
                }
            }
            i++;
        }

        while(!s1.empty()) {
            if(!s2.empty() && s1.top() < s2.top()){
                s1.pop(), s2.pop();
            }
            else{ 
                return false;
            }
        }

        return true;
    }
    
};