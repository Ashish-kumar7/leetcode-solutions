class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
       
        int count1=0;
        int count2=0;
        for(int i=0;i<chips.size();i++)
        {
            if(chips[i]%2==0)
            {
                count1++;
            }
            else {
                count2++;
            }
        }
        return  min(count1,count2);
    }
};