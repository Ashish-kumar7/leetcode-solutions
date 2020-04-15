class Solution {
public:
    int vis[5000];
     vector<int>A[5000];
     void dfs(int s){
        vis[s]=1;
        for(int i=0;i<A[s].size();i++){
            if(vis[A[s][i]]==0){
                
                dfs(A[s][i]);
            }
        }
     }
    bool validTree(int n, vector<vector<int>> &edges) {
        int x=edges.size();
        for(int i=0;i<x;i++){
            int xx=edges[i][0];
            int y=edges[i][1];
            A[xx].push_back(y);
            A[y].push_back(xx);
        }
        cout<<x<<endl;
        if(x!=n-1){
            return 0;
        }
        for(int i=0;i<n;i++){
            vis[i]=0;
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                count++;
                dfs(i);
            }
        }
        cout<<count<<" ";
        if(count==1 && x==n-1){
            return 1;
        }
        return 0;
    }
};