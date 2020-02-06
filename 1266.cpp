class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
    // int max=0;
        int jj=points.size();
        int sum=0;
        int k;
        for(int i=0;i<(jj-1);i++)
        {
           int p=abs(points[i][0]-points[i+1][0]);
            int l=abs(points[i][1]-points[i+1][1]);
            if(p<=l)
            {
                k=l;
            }
            else if(p>l)
            {
               k=p; 
            }
          sum=sum+k;  
        }
        return sum;
    }
};