class Solution {
public:
    
    void dfs(map<int,vector<int>>&adj,set<int>&visited,vector<int>& ans,int src){
        visited.insert(src);
        
        for(int i=0;i<adj[src].size();i++){
            if(visited.find(adj[src][i])==visited.end()){
                ans.push_back(adj[src][i]);
                visited.insert(adj[src][i]);
                dfs(adj,visited,ans,adj[src][i]);

            }
     }
        
        
    }
    
    vector<int> restoreArray(vector<vector<int>>& A) {
        
        map<int,vector<int>>adj;
        
        for(int i=0;i<A.size();i++){
            adj[A[i][0]].push_back(A[i][1]);
            adj[A[i][1]].push_back(A[i][0]);
        }
        
        vector<int>ans;
        int src=0;
        
        for(auto it=adj.begin();it!=adj.end();it++){
            if((it->second).size()==1){
                src=it->first;
               // cout<<src<<endl;
                break;
            }
        }
        ans.push_back(src);
        
       set<int>visited;
        
        dfs(adj,visited,ans,src);
        
        return ans;
        
        
    }
};