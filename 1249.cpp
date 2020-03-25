class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int left=0;
        int right=0;
        vector<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                left++;
            }
            else if(s[i]==')'){
                if(right>=left){
                    continue;
                }
                right++;
            }    
            st.push_back(s[i]);         
        }
        string str1;
        while(right<left){
            int x=st.size()-1;
            while(st[x]!='('){
                x--;
            }
            st.erase(st.begin()+x);
            left--;
        }
        for(int i=0;i<st.size();i++){
            str1+=st[i];
        }
        return str1;
    }
};