class Solution {
public:
    void formimg(int i,vector<int>G,vector<int>&A){
         bool found;
        for(int f=1;f<=4;f++){
            found=true;
            for(int n=0;n<G.size();n++){
                if(A[G[n]]!=-1 && A[G[n]]==f){
                    found=false;
                }
            }
            if(found){
                A[i]=f;
                return ;
            }   
        }   
    }
    vector<int> gardenNoAdj(int N, vector<vector<int>>& paths) {
    vector<int>graph[N];
        for(int i=0;i<paths.size();i++){
           int x=paths[i][0];
            int y=paths[i][1];
            graph[x-1].push_back(y-1);
            graph[y-1].push_back(x-1);
        }
        vector<int>Answer(N,-1);
        for(int i=0;i<N;i++){
           formimg(i,graph[i],Answer); 
        }
        return Answer;
    }
};