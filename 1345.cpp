class Solution {
public:
    int minJumps(vector<int>& arr) {
        unordered_map<int,vector<int>>mp;
        if(arr.size()==1){
            return 0;
        }
        for(int i=1;i<arr.size();i++){
                mp[arr[i]].push_back(i);
        }
        int visited[arr.size()];
        for(int k=0;k<arr.size();k++){
            visited[k]=0;
        }      
        queue<int>Q;
        Q.push(0);
        visited[0]=1;
        int jump=0;
        while(!Q.empty()){
            int n=Q.size();
            for(int i=0;i<n;i++){
                int val=Q.front();
                Q.pop();
                if(val==arr.size()-1){
                    return jump;
                }
                if(val-1>=0 && val-1<arr.size() && visited[val-1]==0 ){
                    Q.push(val-1);
                    visited[val-1]=1;
                }
                if(val+1>=0 && val+1<arr.size() && visited[val+1]==0 ){
                    Q.push(val+1);
                    visited[val+1]=1;
                }
                if(mp.find(arr[val])!=mp.end()){
                    for(auto data:mp[arr[val]]){
                        if(visited[data]==0){
                            Q.push(data);
                            visited[data]=1;
                        }
                    }
                    
                }
                mp[arr[val]].clear();
            }
            jump++;
        }
        return jump; 
    }
};