class Solution {
public:
    int calPoints(vector<string>& ops) {
        int i=0;
        stack<string>S;
        int sum=0;
        while(i!=ops.size()){
            if(ops[i]=="+"){
                string l=S.top();
                S.pop();
                string m=S.top();
                S.push(l);
                int qq=stoi(l);
                int gg=stoi(m);
                int rr=qq+gg;
                S.push(to_string(rr));
                sum+=stoi(S.top());
            }
            else if(ops[i]=="D"){
                string v=S.top();
                int yy=stoi(v);
                int pp=2*yy;
                string kk=to_string(pp);
                S.push(kk);
                 sum+=stoi(S.top());
            }
            else if(ops[i]=="C"){   
                 sum=sum-stoi(S.top());
                    S.pop();
            }
            else {
                S.push(ops[i]);
                sum+=stoi(S.top());
                
            }
            i++;
        }
        return sum;
    }
};