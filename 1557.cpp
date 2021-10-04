class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>ans;
        
        unordered_map<int,int>mp;
        for(int i=0;i<edges.size();i++){
            mp[edges[i][1]]++;
        }
        
        
        for(int i=0;i<n;i++){
            if(mp.find(i)==mp.end()){
                ans.push_back(i);
            }
        }
        
        return ans;
        
    }
};