class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int size=cost.size();
        if(size==2)
        {
            return min(cost[0],cost[1]);
        }
    
        for(int i=2;i<size;i++)
        {
            cost[i]=cost[i]+min(cost[i-1],cost[i-2]);
        }
        int size1=cost.size()-1;
        
        return min(cost[size1],cost[size1-1]);
    }
};