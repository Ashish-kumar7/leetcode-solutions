class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        stack<int>S;
        int i=0;
        S.push(i);
        int n=T.size();
        vector<int>V(n);
        map<int,int>mp;
        for(int i=1;i<T.size();i++){
            int x=T[S.top()];
            if(T[i]>x){
                while(!S.empty() && T[i]>T[S.top()]){
                mp[S.top()]=i;
                S.pop();
                }
                 S.push(i);
            }
            else if(T[i]<=x){
                S.push(i);
            }
            
        }
        for(int i=0;i<T.size();i++){
            if(mp.find(i)==mp.end()){
                V[i]=0;
            }
            else{
                V[i]=((mp.find(i))->second - (mp.find(i))->first ); 
                
            }
        }
        return V;
    }
};