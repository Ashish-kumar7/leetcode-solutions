class Solution {
public:
    void solve(vector<vector<int>>&V,vector<int>temp,int n,int k,int ind){
        if(temp.size()==k){
            V.push_back(temp);
        } 
        for(int i=ind;i<=n;i++){
            temp.push_back(i);
            solve(V,temp,n,k,i+1);
            temp.pop_back();
        }  
        return;
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>V;
        vector<int>temp;
        int ind=1;
        solve(V,temp,n,k,ind);
        return V;
    }
};