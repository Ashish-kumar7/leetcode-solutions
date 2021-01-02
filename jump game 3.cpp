class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
       
        int visited[arr.size()];
        for(int i=0;i<arr.size();i++){
            visited[i]=0;
        }  
        
        stack<int>S;
        S.push(start);         
        
        while(!S.empty()){
            int m=S.top();
            S.pop();
            int t=m+arr[m];
            int d=m-arr[m];
            
            if(t>=0 && t<arr.size() && visited[t]==0){
                visited[t]=1;
                S.push(t);
                if(arr[t]==0){
                    return 1;
                }
            }
            
            if(d>=0 && d<arr.size() && visited[d]==0){
                visited[d]=1;
                S.push(d);
                if(arr[d]==0){
                    return 1;
                }
            }
        }
        
        return 0;
    }
};