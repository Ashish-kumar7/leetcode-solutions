class Solution{
public:
    bool backspaceCompare(string S, string T){
        stack<char>S1;
        stack<char>S2;
        int i=0;
        int j=0;
        while(i<S.length()){   
            if(!S1.empty() && S[i]=='#'){
                S1.pop();
            }
            if(S[i]!='#'){
                S1.push(S[i]);
            }
                i++;
        }
        while(j<T.length()){   
            if(!S2.empty() && T[j]=='#'){
                S2.pop();
            }
            if(T[j]!='#'){
                S2.push(T[j]);
            }
                j++;
        }
        return (S1==S2);
    }
};