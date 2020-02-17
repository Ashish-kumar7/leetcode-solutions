class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int current=0;
        int result=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(current>0)
            {
                current+=nums[i];
            }
            else 
            {
                current=nums[i];
            }
            if(result<=current)
            {
                result=current;
            }            
        }
        
        return result;
        
        
    }
};