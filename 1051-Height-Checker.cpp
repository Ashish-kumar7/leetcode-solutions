class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        vector<int>A= heights;
        sort(A.begin(),A.end());
        int count=0;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]!=heights[i])
            {
                count++;
            }
        }
        return count;
    }
};