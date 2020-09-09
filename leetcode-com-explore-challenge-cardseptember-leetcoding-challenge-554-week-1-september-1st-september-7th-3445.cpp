class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        string ans="";
            
        for(int i=0;i<A.size();i++){
            ans+=to_string(A[i]);
        }
        sort(ans.begin(),ans.end());
        string sol="";
        do{
            string first=ans.substr(0,2);
            string second=ans.substr(2,2);
            int first1=stoi(first);
            int second1=stoi(second);
            if(first1>=0 && first1<=23 && second1>=0 && second1<=59){
                sol=max(sol,first + ":" + second);
            }
        }
        while(next_permutation(ans.begin(),ans.end()));
        return sol;
    }
};