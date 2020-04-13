class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }
        while(pq.size()>=2){
            int y=pq.top();
            pq.pop();
            int x=pq.top();
            pq.pop();
            if(y>x){
                int h=y-x;
                pq.push(h);
            }
        }
        if(!pq.empty()){
        return pq.top();
        }
        return 0;
    }
};