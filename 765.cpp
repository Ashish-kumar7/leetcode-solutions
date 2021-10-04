class Solution {
public:
    
    void dfs(int vis[],vector<int>G[],int i,int & count){
        vis[i]=1;
        count++;
        
        for(auto j:G[i]){
            if(vis[j]==0)dfs(vis,G,j,count);
        }  
    }
    
    int minSwapsCouples(vector<int>& row) {
        
        for(auto &it: row)it=it/2;
        
        int n=row.size();
        
        vector<int>G[n];
        
        for(int i=0;i<n;i+=2){
            if(row[i]==row[i+1])continue;
            else{
                G[row[i]].push_back(row[i+1]);
                G[row[i+1]].push_back(row[i]);
            }
        }
        
        
        int vis[n];
        for(int i=0;i<n;i++){
            vis[i]=0;
        }
        
        int sum=0;
        
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                int count=0;
                dfs(vis,G,i,count);
                sum+=(count-1);
            }
        }
        
        return sum;
    }
};