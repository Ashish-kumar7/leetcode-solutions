class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int left=0;
        int right=0;
        for(int i=0;i<shift.size();i++){
            if(shift[i][0]==0){
                left+=shift[i][1];
            }
            else if(shift[i][0]==1)
            {
                right+=shift[i][1];
            }
        }
        int n=s.size();
         int x;
        string final="";
        cout<<left<<" "<<right;
        if(left>right){
            x=left-right;
            x=x%n;
            string aage="";
            for(int i=x;i<n;i++){
                aage+=s[i];
            }
            string piche="";
            for(int i=0;i<x;i++){
                piche+=s[i];
            }
             final=aage + piche;
        }
        else {
            x=right-left;
            x=x%n;
            
            string aage="";
            for(int i=n-x;i<n;i++){
                aage+=s[i];
            }
            string piche="";
            for(int i=0;i<n-x;i++){
                piche+=s[i];
            }
             final=aage + piche;
        }
        if(x==0){
            return s; 
        }
        return final;
    }
};