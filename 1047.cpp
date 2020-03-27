class Solution {
public:
    string removeDuplicates(string S) {
        int i=1;
        stack<char>s1;
        s1.push(S[0]);
        while(i<S.length()){
            if(!s1.empty() && S[i]==s1.top()){
                s1.pop();
            }
            else{
                 s1.push(S[i]);
            }
           i++;
        }
        string st="";
        while(!s1.empty()){
            char y=s1.top();
            st+=y;
            s1.pop();
        }
        reverse(st.begin(),st.end());
        return st;
    }
};